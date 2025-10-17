#!/usr/bin/env python3

import rclpy                            # Cliente ROS 2 para Python
from rclpy.node import Node             # Clase base de nodos
from geometry_msgs.msg import PoseStamped  # Mensaje de pose con header
import math                             # Para sin/cos
import numpy as np                      # Para ruido gaussiano

class SensorNode(Node):
    def __init__(self):
        super().__init__('sensor_node')  # Nombre del nodo
        # Publicador al topic /pose con cola 10
        self.pub = self.create_publisher(PoseStamped, '/pose', 10)
        # Timer que llama a timer_cb cada 0.2 s (5 Hz)
        self.timer = self.create_timer(0.2, self.timer_cb)
        self.t = 0.0  # tiempo interno para la trayectoria base

    def timer_cb(self):
        msg = PoseStamped()
        # Marca de tiempo del mensaje (buena práctica para sincronización)
        msg.header.stamp = self.get_clock().now().to_msg()

        # Trayectoria base (círculo): x=sen(t), y=cos(t)
        x = 1.0+math.sin(self.t)
        y = 1.0+math.cos(self.t)

        # Ruido gaussiano ~ N(0, 0.05)
        noise_x = np.random.normal(0, 0.05)
        noise_y = np.random.normal(0, 0.05)

        # Pose con ruido
        msg.pose.position.x = x + noise_x
        msg.pose.position.y = y + noise_y

        # Publica y loguea
        self.pub.publish(msg)
        self.get_logger().info(f"Pose publicada: x={msg.pose.position.x:.2f}, y={msg.pose.position.y:.2f}")

        # Avanza el tiempo para la próxima muestra
        self.t += 5

def main(args=None):
    rclpy.init(args=args)
    node = SensorNode()
    rclpy.spin(node)         # Mantiene el nodo corriendo
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
