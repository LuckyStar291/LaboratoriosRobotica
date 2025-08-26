#SEMANA3 Codigo para matrices de rotacion: osea calcular el punto final des pues de una rotacion
## 2x2 -> el punto final es igual a la multiplicaion de la matriz R(de sin^cos) * (por) la matriz del punto inicial

# --------------------------- LIBRERIAS ---------------------------
import numpy as np  # Libreria para calculos matematicos

# --------------------------- VARIABLES PRINCIPALES ---------------------------
#Punto inicial
p_init = np.array([[1],
                   [2]])

#angulo de rotacion g
angle = 90

# --------------------------- FUNCIONES ---------------------------
def matrix2d(angle): #matriz 2x2
    angle = np.deg2rad(angle)   # convierte grados a radianes
    rot_array = np.array([
        [np.cos(angle), -np.sin(angle)], 
        [np.sin(angle),  np.cos(angle)]
    ])
    return rot_array

# --------------------------- CALCULO ---------------------------
matrix = matrix2d(angle)  # Genera la matriz de rotacion

# Multiplicacion matricial = @
print(matrix @ p_init)
