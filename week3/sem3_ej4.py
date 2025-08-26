#SEMANA3 TRASLACION
## 4x4 -> el punto final es igual a la multiplicaion de las matrices R * la matriz del punto inicial

# --------------------------- LIBRERIAS ---------------------------
import numpy as np  # Libreria para calculos matematicos

# --------------------------- VARIABLES PRINCIPALES ---------------------------
#Punto inicial
p_init = np.array([[1],
                   [1],
                   [1],
                   [1]]) # EL NUMERO DE ACA (1) NO SE MODIFICA 100PRE ES 1

"""#matriz de traslacion
T_t1 = 3
T_t2 = 5
T_t3 = 7

# --------------------------- FUNCIONES ---------------------------
m_tras = np.array([
        [ 1, 0, 0, T_t1],
        [ 0, 1, 0, T_t2],
        [ 0, 0, 1, T_t3],
        [ 0, 0, 0, 1]
        ])
"""

# --------------------------- CALCULO ---------------------------
###VERSION MEJORADA
T = np.array([3,5,7])
m_tras = np.eye(4)
m_tras[:3,3] = T

# Multiplicación matricial = @
print(m_tras @ p_init) #multiplicacionmultiples matrices

