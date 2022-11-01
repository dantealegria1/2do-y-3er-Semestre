#include <iostream>
#include <list>
using namespace std;
//depth first searc
class Grafo{
    int V; //Numero de vertices
    list<int> *adj; //arreglo de listas de adyacencia
    bool *visitado; //matriz de visitados.
public:
        Grafo(int V); //Constructor
        void add(int v_2,int w); //GRAFO Dirigido de v -> w
        void DFS(int v_2); //DFS iniciando de v
};
/**
 * Grafo::Grafo(int V) is a constructor that takes an integer as a parameter and creates a graph with V
 * vertices
 * 
 * @param V number of vertices
 */
Grafo::Grafo(int V){
    this->V = V;
    adj = new list<int>[V];
    this->visitado = new bool[this->V];
    /* Initializing the array of visited nodes to false. */
    for(int i=0;i<this->V;i++) this->visitado[i] = false;
}
void Grafo::add(int v_2,int w){
    adj[v_2].push_back(w); //agrega w a la posicion v
    //adj[w].push_back(v); si fuera no dirigido
}
void Grafo::DFS(int v_2){
    this->visitado[v_2] = true; //marca el nodo actual como visitado e imprimelo
    cout << v_2 << "->";//imprimir los vertices

  /* Creating an iterator for the list. */
    list<int>::iterator it;
    for(it = adj[v_2].begin(); it!=adj[v_2].end();++it){ //nodos adyacentes
        /* Checking if the node has been visited. If it has not been visited, it will call the DFS
        function again. */
        if(!this->visitado[*it]){
            DFS(*it);
        }
    }
}
int main(){
	
	int n1[100],n2[100];
	cout<<"cuantos vertices tiene? "<<endl;
    int V;
    cin>>V;
    cout<<"cuantos nexos tiene"<<endl;
    int numeroN;
    cin>>numeroN;
    Grafo G(V);
    /* Asking the user to input the vertices and the edges. */
    for(int i=0; i<numeroN;i++)
    {
    	cout<<"union: "<<i+1<<endl;
    	cout<<"dame el primer punto"<<endl;
    	cin>>n1[i];
    	cout<<"dame el segundo punto"<<endl;
    	cin>>n2[i];
	}
	/* Adding the edges to the graph. */
    for(int i=0;i<numeroN;i++)
	{
		G.add(n1[i],n2[i]);
	}
	/* Asking the user to input the initial vertex. */
    cout<<"cual es el vertice inicial? "<<endl;
    int src;
    cin>>src;

/* Printing the DFS of the graph. */
    cout << "La DFS de G es: "<< endl;
    G.DFS(src);
    return 0;
}
//referencia: 
//https://gist.github.com/MagallanesFito/92ac8dd3badbb2518d653f6a9ba1b573