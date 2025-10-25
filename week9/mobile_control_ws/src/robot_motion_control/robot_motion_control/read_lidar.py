import rclpy
from rclpy.node import Node

from sensor_msgs.msg import LaserScan
from geometry_msgs.msg import Twist
import math

class MinimalSubscriber(Node):

    def __init__(self):
        super().__init__('laser_read')
        self.subscription = self.create_subscription(
            LaserScan,
            'base_scan',
            self.listener_callback,
            10)
        self.subscription  # prevent unused variable warning
        
        timer_period = 0.1  # ajustado un poco para estabilidad
        self.publisher_ = self.create_publisher(Twist, 'cmd_vel', 10)
        self.timer = self.create_timer(timer_period, self.timer_callback)
        
        self.front_distance = None
        self.umbral = 1.0  # metros


        # rango fijo
        self.sector_width_deg = 10.0

    def listener_callback(self, msg: LaserScan):
        angle_min = msg.angle_min
        angle_increment = msg.angle_increment
        n = len(msg.ranges)
        desired_angle = 0.0
        idx_center = int(round((desired_angle - angle_min) / angle_increment))
        half_span = int(round(math.radians(self.sector_width_deg) / angle_increment))
        idx_start = max(0, idx_center - half_span)
        idx_end = min(n - 1, idx_center + half_span)

        distances = []
        for i in range(idx_start, idx_end + 1):
            r = msg.ranges[i]
            if r is None or math.isinf(r) or math.isnan(r):
                continue
            distances.append(r)

        if distances:
            self.front_distance = min(distances)
            self.get_logger().info(f"Distancia frente: {self.front_distance:.2f} m (índices {idx_start}-{idx_end})")
        else:
            self.front_distance = None
            self.get_logger().warn("No hay datos válidos del láser en el sector frontal")

    def timer_callback(self):
        msg = Twist()
        if self.front_distance is None: #stop
            msg.linear.x = 0.0
            msg.angular.z = 0.0
        else:
            if self.front_distance < self.umbral: #obstáculo cercano -> girar
                msg.linear.x = 0.0
                msg.angular.z = 0.6
            else: #camino libre -> avanzar
                msg.linear.x = 1.0
                msg.angular.z = 0.0

        self.publisher_.publish(msg)

def main(args=None):
    rclpy.init(args=args)s
    minimal_subscriber = MinimalSubscriber()
    rclpy.spin(minimal_subscriber)
    minimal_subscriber.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
