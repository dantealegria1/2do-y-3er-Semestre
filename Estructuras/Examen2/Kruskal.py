#kruskal
import matplotlib.pyplot as plt
from networkx.algorithms import tree
import networkx as nx

Grafo = nx.Graph()
Grafo.add_nodes_from(["a","b","c","d","e"])
Grafo.add_weighted_edges_from([("a", "b", 4),("a", "c", 9),("a", "d", 11),("a", "e", 5),("b", "c", 8),("b", "e", 6),("c", "d", 10),("d", "e", 12)])


mst=tree.minimum_spanning_edges(Grafo, algorithm='kruskal', data=False)
edgelist=list(mst)
sorted(sorted(e) for e in edgelist)
print(edgelist)

mst = tree.maximum_spanning_edges(Grafo, algorithm="kruskal", data=False)
edgelist = list(mst)
sorted(sorted(e) for e in edgelist)
print(edgelist)
