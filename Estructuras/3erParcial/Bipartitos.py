#Saber si un grafo es Bipartito
#Importamos la libreria de grafos
import networkx as nx
import matplotlib.pyplot as plt
#Creamos el grafo
G = nx.Graph()
#Agregamos los nodos
G.add_nodes_from([1,2,3,4,5])
#Agregamos las aristas
G.add_edges_from([(1,2),(1,3),(1,4),(2,3),(2,5),(3,4),(4,5)])
#Dibujamos el grafo
nx.draw(G, with_labels=True)
plt.show()
#Verificamos si es bipartito
print("Es bipartito? ", nx.is_bipartite(G))