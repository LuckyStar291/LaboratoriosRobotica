##### LABORATORIO1:     EJERCICIO   1

import rclpy #libreria lpy
from rclpy.node import Node #nodos

from std_msgs.msg import String #libreria letras


class MySubscriber(Node):

    def __init__(self):
        super().__init__('misubscriptor')
        self.subscription = self.create_subscription(String, 'canal', self.listener_callback, 10) #(tipo de dato, nombre del topico/canal de comunicacion, funcion de CALLBACK q se activa cada q escucha algo, valor de cola)
        self.subscription  # prevent unused variable warning

    def listener_callback(self, msg):
        self.get_logger().info('Recibido: "%s"' % msg.data)


def main(args=None):
    rclpy.init(args=args)

    minimal_subscriber = MySubscriber()

    rclpy.spin(minimal_subscriber)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    minimal_subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()