##### LABORATORIO1:     EJERCICIO   1
#OJO: Revisar si esto esta en el xml de package
import rclpy                         # Cliente Python de ROS2
from rclpy.node import Node          # Clase base para crear nodos. Importar libreria NODE de python
from std_msgs.msg import String      # Tipo de mensaje estándar: String. Importar el tipo de canal en este caso string
 
# Clase que define el publicador
class MyPublisher(Node):
    def __init__(self): #Constructor
        super().__init__('elpublicador')  
        # 'elpublicador' es el nombre del nodo (puede cambiarse)

        self.publisher_ = self.create_publisher(String, 'canalcito', 10) 
        # Crear publicador:
        # - Tipo de mensaje: String
        # - Nombre del tópico-canal de comunicacion: "canalcito"
        # - Tamaño de la cola: 10 (mensajes almacenados antes de descartar)        
        
        timer_period = 0.5  # segundos → cada cuánto se ejecuta el callback
        self.timer = self.create_timer(timer_period, self.timer_callback)  
        self.i = 0  # contador de mensajes enviados

    # Callback que se ejecuta cada 0.5 segun linea anterior(#)
    def timer_callback(self):
        msg = String()
        msg.data = f"mensaje: {self.i}"   # contenido del mensaje
        self.publisher_.publish(msg)      # publicación al tópico
        self.get_logger().info(f'Publicando: "{msg.data}"')  # log en consola
        self.i += 1

# Función principal
def main(args=None):
    rclpy.init(args=args)          # Inicializa ROS2
    publisher = MyPublisher()      # Crea instancia del nodo
    rclpy.spin(publisher)          # Mantiene el nodo corriendo (escucha eventos)
    publisher.destroy_node()       # Limpieza
    rclpy.shutdown()               # Apagar ROS2

if __name__ == '__main__':
    main()
