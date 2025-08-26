##### LABORATORIO1:     EJERCICIO   2           (origen, proceso, destino)

import rclpy 

#OJO: estos  de aca que vienen de alguna carpeta don from e import tienes q ponerlo eso en el xml de package >:v
from rclpy.node import Node  #importar libreria NODE de python
from std_msgs.msg import Int32 #importar el tipo de canal en este caso string
 

class NodoCuadrado(Node): #clase publicador

    def __init__(self): #constructor
        super().__init__('n2') # se puede cambiar el mensaje dentro las comillas
        self.subscription = self.create_subscription(Int32, 'top1', self.listener_callback, 10) #(tipo de dato, nombre del topico/canal de comunicacion, funcion de CALLBACK q se activa cada q escucha algo, valor de cola)
        self.publisher_ = self.create_publisher(Int32, 'top2', 10) #(tipo de dato, nombre del topico/canal de comunicacion, valor de cola)


    def listener_callback(self, msg):
        squared = msg.data ** 2
        out_msg = Int32()
        out_msg.data = squared
        self.publisher_.publish(out_msg)
        self.get_logger().info(f'Recibido: {msg.data}, Cuadrado: {squared}')



def main(args=None):
    rclpy.init(args=args)
    node2 = NodoCuadrado()
    rclpy.spin(node2)
    node2.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()