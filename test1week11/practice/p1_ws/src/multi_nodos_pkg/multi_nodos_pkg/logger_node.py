#!/usr/bin/env python3

import rclpy, csv, os
from rclpy.node import Node
from geometry_msgs.msg import Twist, PoseStamped

class LoggerNode(Node):
    def __init__(self):
        super().__init__('logger_node')
        # Suscripciones a los dos tópicos
        self.sub_cmd  = self.create_subscription(Twist,        '/cmd_vel', self.cb_cmd,  10)
        self.sub_pose = self.create_subscription(PoseStamped,  '/pose',    self.cb_pose, 10)

        # Ruta de salida del CSV (en la carpeta actual donde ejecutes)
        self.csv_path = os.path.join(os.getcwd(), 'log_data.csv')

        # Cabecera del CSV
        with open(self.csv_path, 'w', newline='') as f:
            writer = csv.writer(f)
            writer.writerow(['t_sec', 'topic', 'x', 'y', 'z', 'vx', 'wz'])

    def cb_cmd(self, msg: Twist):
        # Guarda velocidad lineal x y angular z
        t = self.get_clock().now().to_msg().sec
        with open(self.csv_path, 'a', newline='') as f:
            csv.writer(f).writerow([t, '/cmd_vel', '', '', '', msg.linear.x, msg.angular.z])

    def cb_pose(self, msg: PoseStamped):
        # Guarda posición x,y,z
        t = self.get_clock().now().to_msg().sec
        with open(self.csv_path, 'a', newline='') as f:
            csv.writer(f).writerow([t, '/pose',
                                    msg.pose.position.x,
                                    msg.pose.position.y,
                                    msg.pose.position.z,
                                    '', ''])

def main():
    rclpy.init()
    node = LoggerNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
