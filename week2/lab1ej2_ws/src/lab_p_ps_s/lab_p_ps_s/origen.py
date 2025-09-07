##### LABORATORIO1:     EJERCICIO   2           (origen, proceso, destino)

import rclpy   # Librería principal de ROS2 para Python
from rclpy.node import Node  # Para crear nodos
from std_msgs.msg import Int32 # Tipo de mensaje (entero de 32 bits)

class NumberPublisher(Node): # Definimos la clase del publicador (hereda de Node)

    def __init__(self): # Constructor de la clase
        super().__init__('origen')  # Nombre del nodo = "origen"
        # Creamos el publicador
        self.publisher_ = self.create_publisher(Int32, 'top1', 10)  # Publica en el tópico "top1", cola = 10
        timer_period = 1  # cada 1 segundo
        # Timer → cada cierto tiempo ejecuta la función callback
        self.timer = self.create_timer(timer_period, self.timer_callback)  
        self.i = 1  # Contador que empieza en 1

    def timer_callback(self):  # Esta función se ejecuta cada 1 segundo
        msg = Int32()  # Creamos un mensaje tipo Int32
        msg.data = self.i  # Le asignamos el valor de i
        self.publisher_.publish(msg)  # Publicamos el mensaje en "top1"
        self.get_logger().info('Publicando: "%s"' % msg.data)  # Mostramos en consola lo enviado
        self.i += 1  # Incrementamos i en cada ciclo

def main(args=None):
    rclpy.init(args=args)   # Inicializamos ROS2
    node1 = NumberPublisher()  # Creamos nodo publicador
    rclpy.spin(node1)  # Mantenemos el nodo corriendo
    node1.destroy_node()  # Cerramos nodo
    rclpy.shutdown()  # Apagamos ROS2

if __name__ == '__main__':
    main()
