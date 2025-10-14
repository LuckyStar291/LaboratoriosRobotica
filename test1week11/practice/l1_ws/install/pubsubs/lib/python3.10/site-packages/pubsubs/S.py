# --- Importaciones base de ROS 2 (Python) ---
import rclpy                           # Cliente ROS 2 para Python
from rclpy.node import Node            # Clase base de nodos
from std_msgs.msg import String        # Debe coincidir con el tipo que publica el otro nodo

# --- Nodo Suscriptor ---
class MySubscriber(Node):
    def __init__(self):
        super().__init__('nodo_subscriptor')        # Nombre del nodo suscriptor """~~~CHANCE~~~"""

        # create_subscription(TipoMensaje, nombre_topico, profundidad_cola)
            # - TipoMensaje: clase del mensaje (String)
            # - nombre_topico: canal de comunicación (este tiene q ser igual al del publicador requerido) """~~~CHANCE~~~"""
            # - funcion_callback
            #- profundidad_cola: Tamano de buffer de mensajes si el suscriptor se atrasa (mensajes almacenados antes de descartar) 
        self.subscription = self.create_subscription(
            String, 'canal_de_comunicacion', self.listener_callback, 10
        )
        self.subscription  # evita warning de variable no usada

    def listener_callback(self, msg: String):    # Se ejecuta al recibir cada mensaje
        # msg.data contiene el texto publicado por el publicador
        self.get_logger().info(f'Recibido: "{msg.data}"')

def main(args=None):
    rclpy.init(args=args)              # Inicializa ROS 2
    node = MySubscriber()              # Crear instancia del nodo suscriptor
    rclpy.spin(node)                   # Mantener el nodo activo escuchando
    node.destroy_node()                # Limpieza del nodo
    rclpy.shutdown()                   # Apaga ROS 2

if __name__ == '__main__':
    main()
