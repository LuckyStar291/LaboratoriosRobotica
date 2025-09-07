##### LABORATORIO1:     EJERCICIO   2           (origen, proceso, destino)

import rclpy  # Librería principal ROS2
from rclpy.node import Node  # Para nodos
from std_msgs.msg import Int32  # Tipo de mensaje: entero 32 bits

class NumberSubscriber(Node):  # Clase del suscriptor

    def __init__(self):  # Constructor
        super().__init__('destino')  # Nombre del nodo = "destino"
        # Suscripción → escucha el tópico "top2"
        self.subscription = self.create_subscription(Int32, 'top2', self.listener_callback, 10)  
        self.subscription  # Evita advertencias de variable no usada

    def listener_callback(self, msg):  # Función que se activa al recibir datos
        self.get_logger().info('Total: "%s"' % msg.data)  # Imprime el valor recibido

def main(args=None):
    rclpy.init(args=args)  # Inicializamos ROS2
    node3 = NumberSubscriber()  # Creamos nodo suscriptor
    rclpy.spin(node3)  # Mantenemos el nodo corriendo
    node3.destroy_node()  # Cerramos nodo
    rclpy.shutdown()  # Apagamos ROS2

if __name__ == '__main__':
    main()
