import sys
import rclpy
from rclpy.node import Node
from matrix_interfaces.srv import Rotxyz  # Importar el servicio que hemos creado
import numpy as np

class MinimalClientAsync(Node):

    def __init__(self):
        super().__init__('minimal_client_async')  # Crear el nodo del cliente
        self.cli = self.create_client(Rotxyz, 'transform')  # Definir el servicio
        while not self.cli.wait_for_service(timeout_sec=1.0):  # Esperar a que el servicio esté disponible
            self.get_logger().info('Servicio no disponible, esperando...')
        
        self.req = Rotxyz.Request()  # Crear la solicitud del servicio

    def send_request(self, angle1, angle2, angle3):
        """ Método para enviar los tres ángulos al servidor """
        self.req.pa = angle1  # Asignar el primer ángulo
        self.req.pb = angle2  # Asignar el segundo ángulo
        self.req.pc = angle3  # Asignar el tercer ángulo
        
        # Llamar al servicio de forma asincrónica
        return self.cli.call_async(self.req)

def main(args=None):
    rclpy.init(args=args)  # Inicializar ROS 2
    minimal_client = MinimalClientAsync()  # Crear una instancia del cliente
    
    # Verificar que se hayan pasado los argumentos correctos
    if len(sys.argv) != 4:
        print("Uso: ros2 run <tu_paquete> <nombre_del_cliente> <angle1> <angle2> <angle3>")
        return 1
    
    try:
        # Obtener los ángulos desde los argumentos de la línea de comandos
        angle1 = float(sys.argv[1])  # Primer ángulo en grados
        angle2 = float(sys.argv[2])  # Segundo ángulo en grados
        angle3 = float(sys.argv[3])  # Tercer ángulo en grados

        # Enviar los ángulos al servidor y esperar la respuesta
        future = minimal_client.send_request(angle1, angle2, angle3)
        rclpy.spin_until_future_complete(minimal_client, future)

        if future.done():
            response = future.result()  # Obtener la respuesta del servidor
            # Mostrar los resultados de la respuesta
            print(f"\nConfiguración de ángulos: ({angle1}, {angle2}, {angle3})")
            print(f"Posición final: ({response.px}, {response.py}, {response.pz})")
            print(f"Ángulos resultantes: ({response.pa}, {response.pb}, {response.pc})")
        else:
            print("No se recibió respuesta del servidor")

    except ValueError:
        print("Error: Todos los parámetros deben ser números.")
    except Exception as e:
        print(f"Error: {e}")
    finally:
        minimal_client.destroy_node()  # Destruir el nodo después de la ejecución
        rclpy.shutdown()  # Apagar ROS 2

if __name__ == '__main__':
    main()
