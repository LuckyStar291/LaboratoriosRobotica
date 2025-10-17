# --- Importaciones ROS2/NumPy ---
import rclpy                                  # Cliente de ROS 2 en Python
from rclpy.node import Node                   # Clase base para crear nodos
from perro_interfaces.srv import Rot             # Nuestro servicio Rot.srv
import numpy as np                            # Para matrices y trigonometría

# --- Longitudes del "brazo" (mm) ---
L1 = 69.5   # hombro -> codo
L2 = 71.5   # codo   -> punta

# --- Utilidades: matrices homogéneas ---
def Rx_deg(theta_deg: float):
    """Rotación Rx(θ) con θ en grados, homogénea 4x4."""
    t = np.deg2rad(theta_deg)
    c, s = np.cos(t), np.sin(t)
    return np.array([[1, 0, 0, 0],
                     [0, c,-s, 0],
                     [0, s, c, 0],
                     [0, 0, 0, 1]], dtype=float)

def Ry_deg(theta_deg: float):
    """Rotación Ry(θ) con θ en grados, homogénea 4x4."""
    t = np.deg2rad(theta_deg)
    c, s = np.cos(t), np.sin(t)
    return np.array([[ c, 0, s, 0],
                     [ 0, 1, 0, 0],
                     [-s, 0, c, 0],
                     [ 0, 0, 0, 1]], dtype=float)

def Tx(d: float):
    """Traslación +X (mm), homogénea 4x4."""
    M = np.eye(4, dtype=float)
    M[2, 3] = -d
    return M

class FKServer(Node):
    """Servidor que calcula la cinemática directa (posición x,y,z en mm)."""
    def __init__(self):
        super().__init__('aibo_server')  # nombre del nodo servidor
        # Crea el servicio: tipo Rot, nombre '/fk_rot', callback compute_fk_cb
        self.srv = self.create_service(Rot, 'fk_rot', self.compute_fk_cb)
        self.get_logger().info("Servicio listo para recibir angulos: .")

    def compute_fk_cb(self, request: Rot.Request, response: Rot.Response):
        # Lee ángulos en grados del request
        th1 = float(request.th1_deg)
        th2 = float(request.th2_deg)
        th3 = float(request.th3_deg)

        # Cadena homogénea (convención elegida)
        T = Rx_deg(th1) @ Ry_deg(th2) @ Tx(L1) @ Ry_deg(th3) @ Tx(L2)

        # Punto extremo del último eslabón (origen local): [0,0,0,1]^T
        p_local = np.array([0.0, 0.0, 0.0, 1.0])
        p_world = T @ p_local

        # Asignar respuesta en mm
        response.x_mm = float(p_world[0])
        response.y_mm = float(p_world[1])
        response.z_mm = float(p_world[2])

        # Log útil
        np.set_printoptions(precision=3, suppress=True)
        self.get_logger().info(
            f"th=[{th1:.1f}, {th2:.1f}, {th3:.1f}]° -> "
            f"(x,y,z)=({response.x_mm:.2f}, {response.y_mm:.2f}, {response.z_mm:.2f}) mm"
        )
        return response

def main(args=None):
    rclpy.init(args=args)    # Inicializa ROS 2
    node = FKServer()        # Instancia del servidor
    rclpy.spin(node)         # Espera peticiones
    node.destroy_node()      # Limpieza
    rclpy.shutdown()         # Cierra ROS 2

if __name__ == '__main__':
    main()
