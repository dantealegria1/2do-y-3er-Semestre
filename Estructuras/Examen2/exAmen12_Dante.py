#Este algoritmo lo que hace es algo asi como agendar un departamento por meses
#Te da la opcion de ingresar una oferta, y te dice si el mes esta ocupado o no
#Si esta ocupado te dice si la oferta es mayor o menor a la que ya esta
#Solamente quitamos ese mes de la oferta anterior y restamos la ganancia de es mes que 
#ya estaba ocupado
matriz=[]
meses=[1,2,3,4,5,6,7,8,9,10,11,12]
def Oferta(inicial, final, monto):
    #eliminamos los meses que ya estan ocupados
    #agregamos la oferta
    matriz.append([inicial,final,monto])
    print("Oferta ",len(matriz),": ",inicial,"-",final," Monto: ",monto)
    #imprimimos el precio por mes
    print("Precio por mes: ",monto/(final-inicial+1))
    #imprimimos los meses disponibles

#imprimimos los meses disponibles
def imprimirMeses():
    #imprimimos los meses disponibles
    print("Meses disponibles: ",meses)

#una disculpa por tanta matriz
mesesIniciales=[]
mesesFinales=[]
mesesT=[]
Cmonto=0
mesesito=[]
inquilinos=[]
contador=0
#pedimos el numero de ofertas
numeroOfertas = int(input("Ingrese el numero de ofertas: "))
#pedimos los datos de las ofertas
for i in range(numeroOfertas):
    inicial = int(input("Ingrese el mes de inicio: "))
    #agregamos a la matriz de meses iniciales
    #y a la de meses totales
    mesesIniciales.append(inicial)
    mesesT.append(inicial)
    final = int(input("Ingrese el mes de finalizacion: "))
    mesesFinales.append(final)
    mesesT.append(final)
    monto = int(input("Ingrese el monto: "))
    #nuestro contador de ganancias
    Cmonto=Cmonto+monto

    #buscamos si ya existe una oferta en ese mes
    for i in range(inicial,final+1):
        if(i in meses):
            print("El mes ",i," ya esta ocupado") 
        #si encontramos una mejor oferta, la reemplazamos
            if(monto>Cmonto):
                print("Se reemplaza la oferta por una mas alta")
                #Agregamos de nuevo los meses que se habian quitado
                Oferta(inicial,final,monto)
                meses.append(i)
                contador=contador+1
                #eliminamos los meses que ya estan ocupados otra vez
                meses.remove(i)
                #restar el monto del mes que se reemplaza
        else:
            #agregamos la oferta
            Oferta(inicial,final,monto)
        if(i in meses):
            #eliminamos los meses que ya estan ocupados otra vez
            meses.remove(i)
    #nuestra matriz inquilinos
    inquilinos.append([inicial,final,monto])
    imprimirMeses()

def precioMes(mes):
    #imprimimos el precio por mes proemdio
    for i in range(len(mesesT)):
        if(mes in range(mesesT[i])):
            print("Precio por mes: ",Cmonto[i]/(mesesFinales[i]-mesesIniciales[i]+1))
            break
        #eliminamos los meses que ya estan ocupados otra vez
print("Ganancias Totales: ",Cmonto-((Cmonto/12)*contador))
for i in range(len(meses)):
    precioMes(meses[i])
#imprimimos la matriz de inquilinos
print("inquilinos")
print(inquilinos)