##### LABORATORIO1:     EJERCICIO   1

import rclpy 
#OJO: estos  de aca que vienen de alguna carpeta don from e import tienes q ponerlo eso en el xml de package >:v
from rclpy.node import Node  #importar libreria NODE de python

from std_msgs.msg import String #importar el tipo de canal en este caso string
 

class MyPublisher(Node): #clase publicador

    def __init__(self): #constructor
        super().__init__('mipublicador') # se puede cambiar el mensaje dentro las comillas
        self.publisher_ = self.create_publisher(String, 'canal', 10) #(tipo de dato, nombre del topico/canal de comunicacion, valor de cola)
        timer_period = 0.5  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback) #callback es una interrupcion por tiempo, cada cierto tiempo
        self.i = 0

    def timer_callback(self):
        msg = String()
        msg.data = f"mensaje: {self.i}"
        self.publisher_.publish(msg)
        self.get_logger().info('Publicando: "%s"' % msg.data)
        self.i += 1


def main(args=None):
    rclpy.init(args=args)

    minimal_publisher = MyPublisher()

    rclpy.spin(minimal_publisher)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    minimal_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()