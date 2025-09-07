##### LABORATORIO1:     EJERCICIO   2           (origen, proceso, destino)

import rclpy   # Librería principal ROS2
from rclpy.node import Node  # Para nodos
from std_msgs.msg import Int32  # Tipo de mensaje: entero 32 bits

class NodoCuadrado(Node): # Nodo que recibe y luego publica

    def __init__(self): # Constructor
        super().__init__('n_2')  # Nombre del nodo = "n2"
        # Suscripción → escucha el tópico "top1"
        self.subscription = self.create_subscription(Int32, 'top1', self.listener_callback, 10)  
        # Publicador → envía al tópico "top2"
        self.publisher_ = self.create_publisher(Int32, 'top2', 10)

    def listener_callback(self, msg):  # Función que se activa al recibir datos de "top1"
        squared = msg.data ** 2  # Calculamos el cuadrado del número recibido
        out_msg = Int32()  # Creamos nuevo mensaje
        out_msg.data = squared  # Guardamos el cuadrado
        self.publisher_.publish(out_msg)  # Publicamos en "top2"
        self.get_logger().info(f'Recibido: {msg.data}, Cuadrado: {squared}')  # Mostramos en consola

def main(args=None):
    rclpy.init(args=args)  # Inicializamos ROS2
    node2 = NodoCuadrado()  # Creamos nodo intermedio
    rclpy.spin(node2)  # Mantenemos el nodo corriendo
    node2.destroy_node()  # Cerramos nodo
    rclpy.shutdown()  # Apagamos ROS2

if __name__ == '__main__':
    main()
