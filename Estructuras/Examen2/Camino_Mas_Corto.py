import matplotlib.pyplot as plt
import matplotlib as mpl
import networkx as nx
Grafo=nx.path_graph(6)

Grafo.add_weighted_edges_from([("a", "b", 6),
("a", "c", 2),("c", "d", 1),("c", "e", 7),
("c", "f", 9),("a", "d", 3)])

print(nx.shortest_path(Grafo, "a", "f", weight="weight"))

pos = nx.spring_layout(Grafo)
node_sizes = [3 + 10 * i for i in range(len(Grafo))]
nx.draw_networkx_nodes(Grafo, pos, node_size=node_sizes, node_color='r')
nx.draw_networkx_edges(Grafo, pos,arrowstyle="->", arrowsize=10, width=2)
nx.draw_networkx_labels(Grafo, pos, font_size=10, font_family='sans-serif')
labels = nx.get_edge_attributes(Grafo,'weight')
nx.draw_networkx_edge_labels(Grafo,pos,edge_labels=labels)
plt.axis('off')
plt.show()


