#!/usr/bin/env python3

import rclpy, math
from rclpy.node import Node
from geometry_msgs.msg import Twist, PoseStamped

class ControllerNode(Node):
    def __init__(self):
        super().__init__('controller_node')
        # Escucha los comandos de velocidad
        self.sub = self.create_subscription(Twist, '/cmd_vel', self.cb_cmd, 10)
        # Publica la pose estimada (feedback)
        self.pub = self.create_publisher(PoseStamped, '/pose', 10)

        # Estado interno del "robot"
        self.x = 0.0
        self.y = 0.0
        self.yaw = 0.0
        self.dt = 0.1

        # Último comando recibido
        self.last_cmd = Twist()

        # Timer para integrar movimiento a 10 Hz
        self.timer = self.create_timer(self.dt, self.timer_cb)

    def cb_cmd(self, msg: Twist):
        # Guardamos el último comando (será aplicado en el timer)
        self.last_cmd = msg

    def timer_cb(self):
        # Modelo cinemático unicycle simple
        v = self.last_cmd.linear.x
        w = self.last_cmd.angular.z

        # Integramos posición y orientación
        self.x += v * math.cos(self.yaw) * self.dt
        self.y += v * math.sin(self.yaw) * self.dt
        self.yaw += w * self.dt

        # Publicamos la pose estimada
        pose = PoseStamped()
        pose.header.stamp = self.get_clock().now().to_msg()
        pose.pose.position.x = self.x
        pose.pose.position.y = self.y

        self.pub.publish(pose)
        self.get_logger().info(f"Pose sim: x={self.x:.2f}, y={self.y:.2f}, yaw={self.yaw:.2f}")

def main():
    rclpy.init()
    node = ControllerNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
