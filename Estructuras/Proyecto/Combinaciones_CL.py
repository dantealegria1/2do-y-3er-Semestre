
cantidad = input("Dame la cantidad de valores del vector: ")
cantidad=int(cantidad)
print(f"Voy a solicitarte {cantidad} números:")
numeros = []
for i in range(cantidad):
    numero = input(f"Ingresa el número {i + 1}: ")
    numeros.append(numero)

print(f"Combinaciones")
from itertools import combinations
N=input(f"Dame el numero de valores que va a tener cada grupo: ")
N=int(N)
temp = combinations(numeros, N)
for i in list(temp):
	print (i)

print(f"Permutaciones")
from itertools import permutations
N=input(f"Dame el numero de valores que va a tener cada grupo: ")
N=int(N)
temp = permutations(numeros, N)
for i in list(temp):
	print (i)

