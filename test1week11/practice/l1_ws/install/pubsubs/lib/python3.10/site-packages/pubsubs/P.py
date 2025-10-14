# --- Importaciones base de ROS 2 (Python) ---
import rclpy                           # Cliente de ROS 2 para Python (inicializa/apaga)
from rclpy.node import Node            # Clase base para crear nodos
from std_msgs.msg import String        # Tipo de mensaje estándar: texto (String) 

# --- Nodo Publicador ---
class MyPublisher(Node):               # Define un nodo heredando de Node
    def __init__(self):                # Constructor: se ejecuta al crear el nodo
        super().__init__('nodo_publicador')        # Nombre del nodo en el grafo """~~~CHANCE~~~"""

        # create_publisher(TipoMensaje, nombre_topico, profundidad_cola)
            # - TipoMensaje: clase del mensaje (String)
            # - nombre_topico: canal de comunicación (topic) """~~~CHANCE~~~"""
            # - profundidad_cola: Tamano de buffer de mensajes si el suscriptor se atrasa (mensajes almacenados antes de descartar) 
        self.publisher_ = self.create_publisher(String, 'canal_de_comunicacion', 10)

        # create_timer(periodo_segundos, funcion_callback)
            # - Llama a la función cada 0.5 s """~~~CHANCE~~~"""s
        self.timer = self.create_timer(0.25, self.timer_callback)

        self.i = 0  # contador para numerar los mensajes

    def timer_callback(self):          # Se ejecuta automáticamente cada 0.5 s
        msg = String()                 # Crear mensaje del tipo correcto
        msg.data = f"mensaje: {self.i}"# Cargar contenido en el campo 'data'
        self.publisher_.publish(msg)   # Publicar en el topic 'canalcito'
        self.get_logger().info(        # Log de confirmación en consola
            f'Publicando: "{msg.data}"'
        )
        self.i += 1                    # Siguiente número para el próximo mensaje

def main(args=None):                   # Punto de entrada del programa
    rclpy.init(args=args)              # Inicializa ROS 2 (obligatorio)
    node = MyPublisher()               # Crear instancia del nodo publicador
    rclpy.spin(node)                   # Mantener el nodo corriendo (callbacks)
    node.destroy_node()                # Limpieza del nodo
    rclpy.shutdown()                   # Apaga ROS 2 ordenadamente

if __name__ == '__main__':             # Permite ejecutar con `python3 l1publisher.py`
    main()
