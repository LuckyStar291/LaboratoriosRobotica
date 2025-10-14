#!/usr/bin/env python3  # Permite ejecutar como script en Linux

# --- Importa el tipo de servicio que definiste en ucb_interfaces ---
from test_interfaces.srv import Rot          # Rot.srv: request y response
import numpy as np                           # Para trigonometría y matrices
import rclpy                                 # Cliente de ROS 2 en Python
from rclpy.node import Node                  # Clase base para crear nodos

class MinimalService(Node):
    def __init__(self):
        super().__init__('server_Angles')  # Nombre del nodo servidor
        # create_service(TipoServicio, nombre, callback)
        # - 'transform' será el nombre del servicio (ruta /transform)
        self.srv = self.create_service(Rot, 'transform', self.transform_cb)
        self.get_logger().info("Servicio '/transform' listo para recibir solicitudes.")

    def transform_cb(self, request: Rot.Request, response: Rot.Response):
        # Lee el request (ángulo en grados y punto inicial)
        ang_deg = request.angle
        p_i = np.array([[request.px], [request.py], [request.pz]], dtype=float)

        # Convierte grados a radianes
        ang = np.deg2rad(ang_deg)

        # Matriz de rotación (alrededor de Z)
        Rz = np.array([[np.cos(ang), -np.sin(ang), 0.0],
                       [np.sin(ang),  np.cos(ang), 0.0],
                       [0.0,          0.0,         1.0]])

        # Aplica la rotación al punto
        p_f = Rz @ p_i

        # Carga la respuesta (como float32 compatibles)
        response.fx = float(p_f[0])
        response.fy = float(p_f[1])
        response.fz = float(p_f[2])

        # Log informativo
        self.get_logger().info(
            f'({request.px}, {request.py}, {request.pz}) rot {ang_deg}° -> '
            f'({response.fx:.2f}, {response.fy:.2f}, {response.fz:.2f})'
        )
        return response  # Devuelve el objeto response

def main(args=None):
    rclpy.init(args=args)           # Inicializa ROS 2
    node = MinimalService()         # Crea el nodo servidor
    rclpy.spin(node)                # Espera llamadas del cliente
    node.destroy_node()             # Limpieza
    rclpy.shutdown()                # Apaga ROS 2

if __name__ == '__main__':
    main()
