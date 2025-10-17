import rclpy
from rclpy.node import Node
from geometry_msgs.msg import PoseStamped
from collections import deque           # Ventanas deslizantes
import numpy as np

class FilterNode(Node):
    def __init__(self):
        super().__init__('filter_node')
        # Suscribe a /pose (datos ruidosos)
        self.sub = self.create_subscription(PoseStamped, '/pose', self.cb, 10)
        # Publica en /pose_filtered (misma estructura, pero filtrada)
        self.pub = self.create_publisher(PoseStamped, '/pose_filtered', 10)
        # Ventanas para media móvil (tamaño 5)
        self.win_x = deque(maxlen=5)
        self.win_y = deque(maxlen=5)

    def cb(self, msg: PoseStamped):
        # Añadimos la nueva muestra
        self.win_x.append(msg.pose.position.x)
        self.win_y.append(msg.pose.position.y)
        # Promedio simple en ventana
        fx = float(np.mean(self.win_x))
        fy = float(np.mean(self.win_y))

        # Armamos el mensaje de salida
        out = PoseStamped()
        out.header.stamp = msg.header.stamp  # propagamos el timestamp
        out.pose.position.x = fx
        out.pose.position.y = fy

        # Publicamos y registramos
        self.pub.publish(out)
        self.get_logger().info(f"Filtrado: x={fx:.2f}, y={fy:.2f}")

def main():
    rclpy.init()
    node = FilterNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
