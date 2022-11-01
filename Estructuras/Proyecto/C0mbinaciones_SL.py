def combinaciones(numeros, N):
    if N == 0:
        yield []
    else:
        for i in range(len(numeros)):
            for combi in combinaciones(numeros[i+1:], N-1):
                yield [numeros[i]] + combi

def permutaciones(numeros, N):
    if N == 0:
        yield []
    else:
        for i in range(len(numeros)):
            for combi in permutaciones(numeros, N-1):
                yield [numeros[i]] + combi


cantidad=int(input("Dame la cantidad de valores del vector: "))
print(f"Voy a solicitarte {cantidad} números:")
numeros = []
for i in range(cantidad):
    numero = input(f"Ingresa el número {i + 1}: ")
    numeros.append(numero)
N=int(input(f"Dame el numero de valores que va a tener cada grupo: "))
j=0;
print(f"Combinaciones")
for i in combinaciones(numeros, N):
    print(i)
    j=j+1;

print(j)
j=0;
print(f"Permutaciones")
for i in permutaciones(numeros, N):
    print(i)
    j=j+1;
print(j)


