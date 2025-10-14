#!/usr/bin/env python3

import sys
from test_interfaces.srv import Rot      # Tipo de servicio Rot
import rclpy
from rclpy.node import Node

class MinimalClientAsync(Node):
    def __init__(self):
        super().__init__('client_Angles')   # Nombre del nodo cliente
        # Crea el cliente hacia el servicio '/transform' de tipo Rot
        self.cli = self.create_client(Rot, 'transform')
        # Espera hasta que el servidor esté disponible
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        # Prepara un objeto Request reutilizable
        self.req = Rot.Request()

    def send_request(self, ang, x, y, z):
        # Carga los campos del request (conversión a int)
        self.req.angle = int(ang)
        self.req.px = int(x)
        self.req.py = int(y)
        self.req.pz = int(z)
        # Llamada asíncrona: devuelve un futuro que se completará con la respuesta
        return self.cli.call_async(self.req)

def main():
    rclpy.init()
    node = MinimalClientAsync()

    # Espera 4 argumentos: <angle> <px> <py> <pz>
    if len(sys.argv) != 5:
        print("Uso: ros2 run rotations_srv client_angles <angle> <px> <py> <pz>")
        node.destroy_node()
        rclpy.shutdown()
        return 1

    # Lee argumentos de la línea de comandos
    ang, x, y, z = sys.argv[1:5]

    # Envía request y espera la respuesta
    future = node.send_request(ang, x, y, z)
    rclpy.spin_until_future_complete(node, future)

    if future.done():
        resp = future.result()
        print("\nTransformación completada:")
        print(f"  Punto inicial: ({x}, {y}, {z})")
        print(f"  Ángulo: {ang}°")
        print(f"  Punto final: ({resp.fx:.2f}, {resp.fy:.2f}, {resp.fz:.2f})")
    else:
        print("No se recibió respuesta del servidor.")

    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
