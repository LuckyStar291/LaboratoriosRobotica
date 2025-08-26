#SEMANA3 Codigo para matrices de rotacion: osea calcular el punto final des pues de una rotacion
## 3x3 -> el punto final es igual a la multiplicaion de la matriz R(de sin^cos) * (por) la matriz del punto inicial

# --------------------------- LIBRERIAS ---------------------------
import numpy as np  # Libreria para calculos matematicos

# --------------------------- VARIABLES PRINCIPALES ---------------------------
#Punto inicial
p_init = np.array([[1],
                   [2],
                   [3]])

#angulo de rotacion g
angle = 90

# --------------------------- FUNCIONES ---------------------------
def rot_y(angle): #matriz 3x3 respecto al eje Y
    angle = np.deg2rad(angle)
    return np.array([
        [ np.cos(angle), 0, np.sin(angle)],
        [             0, 1,             0],
        [-np.sin(angle), 0, np.cos(angle)]
    ])

def rot_x(angle): #matriz 3x3 respecto al eje X
    angle = np.deg2rad(angle)
    return np.array([
        [1,             0,              0],
        [0, np.cos(angle), -np.sin(angle)],
        [0, np.sin(angle),  np.cos(angle)]
    ])
def rot_z(angle): #matriz 3x3 respecto al eje Z
    angle = np.deg2rad(angle)
    return np.array([
        [np.cos(angle), -np.sin(angle), 0],
        [np.sin(angle),  np.cos(angle), 0],
        [            0,              0, 1]
    ])

# --------------------------- CALCULO ---------------------------
matrix = rot_x(angle)  # Genera la matriz de rotacion

# Multiplicación matricial = @
print(matrix @ p_init)
