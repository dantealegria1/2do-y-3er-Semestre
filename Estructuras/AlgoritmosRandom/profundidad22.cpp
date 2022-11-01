#include <iostream>
#include <list>
using namespace std;

class Graph{
    int V; //Numero de vertices
    list<int> *adj; //arreglo de listas de adyacencia
    bool *visited; //matriz de visitados.
public:
        Graph(int V); //Constructor
        void addEdge(int v,int w); //GRAFO Dirigido de v -> w
        void DFS(int v); //DFS iniciando de v
};
Graph::Graph(int V){
    this->V = V;
    adj = new list<int>[V];
    this->visited = new bool[this->V];
    for(int i=0;i<this->V;i++) this->visited[i] = false;
}
void Graph::addEdge(int v,int w){
    adj[v].push_back(w); //agrega w a la posicion v
    //adj[w].push_back(v); si fuera no dirigido
}
void Graph::DFS(int v){
    this->visited[v] = true; //marca el nodo actual como visitado e imprimelo
    cout << v << " ";

    list<int>::iterator it;
    for(it = adj[v].begin(); it!=adj[v].end();++it){ //nodos adyacentes
        if(!this->visited[*it]){
            DFS(*it);
        }
    }
}
int main(){
    int V = 4;
    Graph G(V);
    G.addEdge(0,1);
    G.addEdge(0,2);
    G.addEdge(1,2);
    G.addEdge(2,0);
    G.addEdge(2,3);
    G.addEdge(3,3);
    int src = 2;
    cout << "La DFS de G es (iniciando de el vertice 2): " << endl << endl;
    G.DFS(src);
    /**
    Si el grafo fuera disconexo:
        for(int i=0;i<V;i++){
            G.DFS(i);
        }
    */
    return 0;
}
