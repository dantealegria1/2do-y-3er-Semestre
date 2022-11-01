#Definimos nuestra funcion tomando 3 parametros
#Grafo, Vertice inicial y Vertice final
def PrimMinima(w,n,s):
    v=[]
    #Hacemos que si el v
    while(len(v)!=n):
        v.append(0)
    v[s]=1
    E=[]
    for i in range(0,n-1):
        minimo=9
        agregar_vertice=0
        e=[]
        for j in range(0,n):
            if(v[j]==1):
                for k in range(0,n):
                    if(v[k]==0):
                        if(w[j][k]<minimo):
                            agregar_vertice=k
                            e=[j,k]
                            minimo=w[j][k]
        v[agregar_vertice]=1
        E.append(e)
    return E
    
def PrimMaxima(w,n,s):
    v=[]
    while(len(v)!=n):
        v.append(0)
    v[s]=1
    E=[]
    for i in range(0,n-1):
        maximo=0
        agregar_vertice=0
        e=[]
        for j in range(0,n):
            if(v[j]==1):
                for k in range(0,n):
                    if(v[k]==0):
                        if(w[j][k]>maximo):
                            agregar_vertice=k
                            e=[j,k]
                            maximo=w[j][k]
        v[agregar_vertice]=1
        E.append(e)
    return E
n=6
s=0
w=[
    [9,4,2,9,3,9],
    [4,9,9,5,9,9],
    [2,9,9,1,6,3],
    [9,5,1,9,9,6],
    [3,9,6,9,9,2],
    [9,9,3,6,3,9]
]
print("1-Arbol de expansion minima")
print(PrimMinima(w,n,s))
print("2-Arbol de expansion maxima")
print(PrimMaxima(w,n,s))