##### LABORATORIO2:     EJERCICIO   1           (angulos)

import rclpy 

#OJO: estos  de aca que vienen de alguna carpeta don from e import tienes q ponerlo eso en el xml de package >:v
from rclpy.node import Node  #importar libreria NODE de python
from std_msgs.msg import Int32 #importar el tipo de canal en este caso string
 

class NumberPublisher(Node): #clase publicador

    def __init__(self): #constructor
        super().__init__('origen') # se puede cambiar el mensaje dentro las comillas
        self.publisher_ = self.create_publisher(Int32, 'up', 10) #(tipo de dato, nombre del topico/canal de comunicacion, valor de cola)
        timer_period = 1  # seg
        self.timer = self.create_timer(timer_period, self.timer_callback) #callback es una interrupcion por tiempo, cada cierto tiempo
        self.i = 1

    def timer_callback(self):
        x = int(input("ingresar angulo: "))
        msg = Int32()
        msg.data = x
        self.publisher_.publish(msg)
        self.get_logger().info(f"Publicando: {msg.data}")
        self.i += 1


def main(args=None):
    rclpy.init(args=args)
    node1 = NumberPublisher()
    rclpy.spin(node1)
    node1.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()