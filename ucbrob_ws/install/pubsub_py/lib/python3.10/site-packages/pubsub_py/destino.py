##### LABORATORIO1:     EJERCICIO   2           (origen, proceso, destino)

import rclpy #libreria lpy
from rclpy.node import Node #nodos

from std_msgs.msg import Int32 #libreria letras


class NumberSubscriber(Node):

    def __init__(self):
        super().__init__('destino')
        self.subscription = self.create_subscription(Int32, 'top2', self.listener_callback, 10) #(tipo de dato, nombre del topico/canal de comunicacion, funcion de CALLBACK q se activa cada q escucha algo, valor de cola)
        self.subscription

    def listener_callback(self, msg):
        self.get_logger().info('Total: "%s"' % msg.data)


def main(args=None):
    rclpy.init(args=args)
    node3 = NumberSubscriber()
    rclpy.spin(node3)
    node3.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()