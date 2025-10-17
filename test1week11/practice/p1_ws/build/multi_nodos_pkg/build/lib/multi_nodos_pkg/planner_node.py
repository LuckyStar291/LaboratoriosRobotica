#!/usr/bin/env python3

import rclpy, math
from rclpy.node import Node
from geometry_msgs.msg import PoseStamped, Twist

class PlannerNode(Node):
    def __init__(self):
        super().__init__('planner_node')
        # Escucha la pose filtrada
        self.sub = self.create_subscription(PoseStamped, '/pose_filtered', self.cb, 10)
        # Publica comandos de velocidad
        self.pub = self.create_publisher(Twist, '/cmd_vel', 10)
        # Umbral de "cerca" (ajústalo con tu equipo)
        self.threshold = 0.5

    def cb(self, msg: PoseStamped):
        # Distancia al origen (0,0) como medida de "cercanía"
        dist = math.sqrt(msg.pose.position.x**2 + msg.pose.position.y**2)

        cmd = Twist()  # comando vacío (0 por defecto)
        if dist < self.threshold:
            # Obstáculo cercano: no avanzar, girar
            cmd.linear.x = 0.0
            cmd.angular.z = 0.5
            self.get_logger().info(f"Obstáculo cercano (d={dist:.2f}) → Girar")
        else:
            # Libre: avanzar, no girar
            cmd.linear.x = 0.5
            cmd.angular.z = 0.0
            self.get_logger().info(f"Libre (d={dist:.2f}) → Avanzar")

        self.pub.publish(cmd)

def main():
    rclpy.init()
    node = PlannerNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
