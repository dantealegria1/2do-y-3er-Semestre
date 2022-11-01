
import os

#DEFINIENDO EL GRAFO MEDIANTE UN DICCIONARIO DE PYTHON:
#PARA MEJOR COMPRENSION EL VALOR 'a': [('p',4), ('j',15), ('b',1)],
#INDICA QUE EL VERTICE 'a' ES ADYACENTE CON 'P', CON 'J' Y CON 'b' 
#CADA UNO CON SU RESPECTIVO PESO, AUNQUE EL PESO PARA HACER RECCORRIDOS EN PROFUNDIDAD
#NO ES NECESARIO, SE LO AGREGUE PARA MOSTRAR TAMBIÉN LA IMPLEMENTACIÓN DE UN GRAFO PONDERADO



grafo = {'a': [],
         	'b': [('h',0)],
			'd': [('b',0), ('c',0)],
			'c': [('r',0)],
			'r': [('h',0)],
			't': [],
			'h': [('a',0), ('t',0)] 
		}
grafo = {'a': [],
         	'b': [('h')],
			'd': [('b'), ('c')],
			'c': [('r')],
			'r': [('h')],
			't': [],
			'h': [('a'), ('t')] 
		}
print()
		
visitados = []
cola = []

origen = input("Ingresa el nodo origen: ")
print("\nLista de recorrido en anchura\n")
#Paso 1: SE COLOCA EL VÉRTICE ORIGEN EN UNA COLA
cola.append(origen)
#Paso 2: MIENTRAS LA COLA NO ESTE VACÍA
while cola:
	#paso 3: DESENCOLAR UN VÉRTICE, ESTE SERÁ AHORA EL VÉRTICE ACTUAL
	actual = cola.pop(0)

	#paso 4: SI EL VÉRTICE ACTUAL NO HA SIDO VISITADO
	if actual not in visitados:
		#paso 5: PROCESAR (IMPRIMIR) EL VÉRTICE ACTUAL
		print("Vertice actual -> ", actual)
		#paso 6: COLOCAR VÉRTICE ACTUAL EN LA LISTA DE VISITADOS
		visitados.append(actual)
	#paso 7: PARA CADA VÉRTICE QUE EL VÉRTICE ACTUAL TIENE COMO DESTINO,
	#        Y QUE NO HA SIDO VISITADO:
	#        ENCOLAR EL VERTIC

	# para grafos ponderados
	#for key, lista in grafo[actual]:
	#	if key not in visitados:
	#		cola.append(key)

	for key in grafo[actual]:
		if key not in visitados:
			cola.append(key)

print()
