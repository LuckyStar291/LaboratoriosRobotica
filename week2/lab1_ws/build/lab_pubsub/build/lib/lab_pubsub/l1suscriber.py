##### LABORATORIO1:     EJERCICIO   1

import rclpy                         # Cliente Python de ROS2
from rclpy.node import Node          # Clase base para crear nodos. Importar libreria NODE de python
from std_msgs.msg import String      # Tipo de mensaje estándar: String. Importar el tipo de canal en este caso string

# Clase suscriptor
class MySubscriber(Node):
    def __init__(self):
        super().__init__('elsubscriptor')  
        # 'elsubscriptor' es el nombre de este nodo (puede cambiarse)
        
        self.subscription = self.create_subscription(String, 'canalcito', self.listener_callback, 10)
        # Crear suscripción:
            # - Tipo de mensaje: String
            # - Nombre del tópico: "canalcito" (mismo que publica el publicador)
            # - Función callback: se ejecuta cada vez que llega un mensaje
            # - Tamaño de cola: 10 (buffer de mensajes)
        
        self.subscription  # evita warning de variable no usada

    # Callback → se ejecuta cada vez que llega un mensaje
    def listener_callback(self, msg):
        self.get_logger().info('Recibido: "%s"' % msg.data)

# Función principal
def main(args=None):
    rclpy.init(args=args)                  # Inicializa ROS2
    minimal_subscriber = MySubscriber()    # Crea el nodo suscriptor
    rclpy.spin(minimal_subscriber)         # Mantiene el nodo corriendo
    minimal_subscriber.destroy_node()      # Limpieza
    rclpy.shutdown()                       # Apagar ROS2
if __name__ == '__main__':
    main()
