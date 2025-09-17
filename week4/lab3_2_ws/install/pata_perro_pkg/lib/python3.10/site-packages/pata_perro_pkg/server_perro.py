from matrix_interfaces.srv import Rotxyz  # Importar el servicio
import numpy as np  # Librería para cálculos matemáticos
import rclpy
from rclpy.node import Node

# Función para crear la matriz de rotación sobre el eje Y
def rot_y(angle):
    angle = np.deg2rad(angle)  # Convertir a radianes
    return np.array([
        [np.cos(angle), 0, np.sin(angle), 0],
        [0, 1, 0, 0],
        [-np.sin(angle), 0, np.cos(angle), 0],
        [0, 0, 0, 1]
    ])

# Función para crear la matriz de rotación sobre el eje X
def rot_x(angle):
    angle = np.deg2rad(angle)  # Convertir a radianes
    return np.array([
        [1, 0, 0, 0],
        [0, np.cos(angle), -np.sin(angle), 0],
        [0, np.sin(angle), np.cos(angle), 0],
        [0, 0, 0, 1]
    ])

# Función para crear la matriz de traslación en Z
def traslacion(L):
    return np.array([
        [1, 0, 0, 0],
        [0, 1, 0, 0],
        [0, 0, 1, -L],
        [0, 0, 0, 1]
    ])

class MinimalService(Node):
    def __init__(self):
        super().__init__('minimal_service')  # Inicializamos el nodo
        self.srv = self.create_service(Rotxyz, 'transform', self.transform_matrix_chain)  # Creamos el servicio

    def transform_matrix_chain(self, request, response):
        # Extraemos los ángulos de la solicitud
        angle1 = request.px  # Ángulo sobre el eje X
        angle2 = request.py  # Ángulo sobre el eje Y (primera rotación)
        angle3 = request.pz  # Ángulo sobre el eje Y (segunda rotación)

        # Longitudes fijas del robot (distancias entre las partes del robot)
        L1 = 69.5  # Distancia del hombro al codo (en mm)
        L2 = 71.5  # Distancia del codo a la pata (en mm)

        # Construcción de las matrices de rotación y traslación
        Rx = rot_x(angle1)  # Matriz de rotación sobre el eje X
        Ry1 = rot_y(angle2)  # Matriz de rotación sobre el eje Y (primera rotación)
        Tz1 = traslacion(L1)  # Traslación en Z por L1
        Ry2 = rot_y(angle3)  # Matriz de rotación sobre el eje Y (segunda rotación)
        Tz2 = traslacion(L2)  # Traslación en Z por L2

        # Realizamos la multiplicación de las matrices (calculamos la transformación homogénea)
        M = Rx @ Ry1 @ Tz1 @ Ry2 @ Tz2

        # Para imprimir de manera compacta
        np.set_printoptions(precision=1, suppress=True)  # Configura la impresión con 3 decimales y suprime notación científica

        # Mostrar la matriz resultante de forma compacta
        self.get_logger().info(f"Matriz resultante de la transformación:\n{M}")

        # Asignamos la matriz a la respuesta para que el cliente la pueda visualizar
        response.matrizz = M.flatten().tolist()  # Convertimos la matriz 4x4 a una lista para la respuesta

        return response

def main(args=None):
    rclpy.init(args=args)  # Inicializamos ROS2
    minimal_service = MinimalService()  # Creamos el servicio
    rclpy.spin(minimal_service)  # Mantenemos el servicio activo
    rclpy.shutdown()

if __name__ == '__main__':
    main()
