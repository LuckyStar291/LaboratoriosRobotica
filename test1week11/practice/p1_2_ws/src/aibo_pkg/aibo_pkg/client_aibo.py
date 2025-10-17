#!/usr/bin/env python3

import sys
import rclpy
from rclpy.node import Node
from perro_interfaces.srv import Rot

class FKClient(Node):
    def __init__(self):
        super().__init__('aibo_client')
        self.cli = self.create_client(Rot, 'fk_rot')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Esperando /fk_rot...')
        self.req = Rot.Request()

    def send(self, th1, th2, th3):
        self.req.th1_deg = float(th1)
        self.req.th2_deg = float(th2)
        self.req.th3_deg = float(th3)
        return self.cli.call_async(self.req)

def main(args=None):                 # <-- ESTA FUNCIÓN ES OBLIGATORIA
    rclpy.init(args=args)
    node = FKClient()

    if len(sys.argv) != 4:
        print("Uso: ros2 run aibo_pkg Client_aibo <th1> <th2> <th3>")
        node.destroy_node(); rclpy.shutdown(); return 1

    fut = node.send(sys.argv[1], sys.argv[2], sys.argv[3])
    rclpy.spin_until_future_complete(node, fut)
    if fut.done():
        resp = fut.result()
        print(f"(x,y,z)=({resp.x_mm:.2f},{resp.y_mm:.2f},{resp.z_mm:.2f})")
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
