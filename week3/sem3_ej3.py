#SEMANA3 Codigo para multiplicacion de multiples matrices de rotacion
## 3x3 -> el punto final es igual a la multiplicaion de las matrices R * la matriz del punto inicial

# --------------------------- LIBRERIAS ---------------------------
import numpy as np  # Libreria para calculos matematicos

# --------------------------- VARIABLES PRINCIPALES ---------------------------
#Punto inicial
p_init = np.array([[1],
                   [1],
                   [1]])

#angulo de rotacion g
angleX = 45
angleY = 30
angleZ = 30
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
matrixX = rot_x(angleX)  # Genera la matriz de rotacion X
matrixY = rot_y(angleY)  # Genera la matriz de rotacion Y
matrixZ = rot_z(angleZ)  # Genera la matriz de rotacion Z

# Multiplicación matricial = @
print(matrixZ @ matrixX @ p_init) #multiplicacionmultiples matrices
