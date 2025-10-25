import rclpy # Importa la librería rclpy que permite usar ROS2 en Python
from rclpy.node import Node # Importa la clase base para nodos

from sensor_msgs.msg import LaserScan    # Importa el tipo de mensaje LaserScan (láser 2D) :contentReference[oaicite:0]{index=0}
from geometry_msgs.msg import Twist      # Importa el tipo de mensaje Twist (velocidad lineal + angular).
import math                              # Importa la librería matemática estándar.

class MinimalSubscriber(Node):           # Definimos una clase que hereda de Node.

    def __init__(self):
        super().__init__('laser_read')   # Inicializa el nodo con nombre 'laser_read'.
        self.subscription = self.create_subscription(
            LaserScan,
            'base_scan',
            self.listener_callback,
            10)                             # Suscribe al tópico 'base_scan' con tipo LaserScan, y callback listener_callback.
        self.subscription                # Línea placeholder para evitar advertencia de variable no usada.

        timer_period = 0.1                # Define el periodo del timer en 0.1 segundos.
        self.publisher_ = self.create_publisher(Twist, 'cmd_vel', 10)
                                         # Crea el publicador para el tópico 'cmd_vel' de tipo Twist.
        self.timer = self.create_timer(timer_period, self.timer_callback)
                                         # Crea un timer que llama a timer_callback cada timer_period segundos.

        # Parámetros modificables:
        self.umbral = 0.5                  # (m) Distancia mínima para considerar "obstáculo cercano".
        self.vel_avance = 2.0              # Velocidad lineal cuando el camino está libre.
        self.vel_giro = 1.0                # Velocidad angular (giro) cuando se detecta obstáculo.

        # Ángulos de los sectores a monitorizar:
        self.sector_front_deg = 20.0       # ±20° para el frente.
        self.sector_side_deg = 20.0        # ±30° para los lados (izquierdo/derecho).

        # Variables de estado para las distancias medidas:
        self.front_distance = None
        self.left_distance = None
        self.right_distance = None
        self.rear_distance = None

    def listener_callback(self, msg: LaserScan):
        # Este método se llama cada vez que llega un mensaje LaserScan al tópico 'base_scan'.

        angle_min = msg.angle_min
        angle_increment = msg.angle_increment
        n = len(msg.ranges)
        # Extraemos los valores clave del mensaje: ángulo mínimo y el incremento y el número de mediciones.

        def min_distance_in_sector(center_angle_rad, half_width_deg):
            # Función interna para calcular la distancia mínima dentro de un sector angular.
            half_width_rad = math.radians(half_width_deg)
            idx_center = int(round((center_angle_rad - angle_min) / angle_increment))
            half_span = int(round(half_width_rad / angle_increment))
            idx_start = max(0, idx_center - half_span)
            idx_end   = min(n - 1, idx_center + half_span)
            # Calculamos el índice central y los extremos del rango en el array ranges[].

            dlist = []
            for i in range(idx_start, idx_end + 1):
                r = msg.ranges[i]
                if r is None or math.isinf(r) or math.isnan(r):
                    # Si la medición es inválida (infinito o NaN), la ignoramos.
                    continue
                dlist.append(r)
            if dlist:
                return min(dlist)
            else:
                return None

        # Ahora calculamos para cada sector:
        self.front_distance = min_distance_in_sector(0.0, self.sector_front_deg)
        self.left_distance  = min_distance_in_sector(math.pi/2, self.sector_side_deg)
        self.right_distance = min_distance_in_sector(-math.pi/2, self.sector_side_deg)

        # Registramos los valores para depuración:
        self.get_logger().info(
            f"Distas → frente: {self.front_distance}, izq: {self.left_distance}, der: {self.right_distance}"
        )

    def timer_callback(self):
        # Este método se llama periódicamente (cada timer_period segundos) para decidir el comando de movimiento.
        msg = Twist()
        if (self.front_distance is None or
            self.left_distance is None or
            self.right_distance is None):
            # Si alguna lectura fundamental falta → detener por seguridad.
            msg.linear.x = 0.0
            msg.angular.z = 0.0
        else:
            if (self.front_distance < self.umbral or
                self.left_distance < self.umbral or
                self.right_distance < self.umbral):
                # Si **algún** sector (frente, izquierda o derecha) está por debajo del umbral → hay riesgo.
                if self.front_distance < self.umbral:
                    # Obstáculo al frente → girar a la izquierda.
                    msg.linear.x = 0.0
                    msg.angular.z = self.vel_giro
                elif self.left_distance < self.umbral:
                    # Obstáculo al lado izquierdo → girar a la derecha.
                    msg.linear.x = 0.0
                    msg.angular.z = -self.vel_giro
                elif self.right_distance < self.umbral:
                    # Obstáculo al lado derecho → girar a la izquierda.
                    msg.linear.x = 0.0
                    msg.angular.z = self.vel_giro
                else:
                    # (Opcional) Si sólo el trasero está bloqueado, podríamos avanzar.
                    msg.linear.x = self.vel_avance
                    msg.angular.z = 0.0
            else:
                # Ningún obstáculo cerca → camino libre → avanzar recto.
                msg.linear.x = self.vel_avance
                msg.angular.z = 0.0

        # Publicamos el mensaje de velocidad:
        self.publisher_.publish(msg)

def main(args=None):
    rclpy.init(args=args)                       # Inicializa la librería ROS2.
    minimal_subscriber = MinimalSubscriber()    # Crea la instancia del nodo.
    rclpy.spin(minimal_subscriber)              # Mantiene el nodo vivo hasta que lo detengan.
    minimal_subscriber.destroy_node()           # Destruye el nodo explícitamente.
    rclpy.shutdown()                            # Apaga la librería ROS2.

if __name__ == '__main__':
    main()
