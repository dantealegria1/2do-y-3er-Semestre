//Dante Alegria Romero
//Encontrar el camino mas corto entre dos nodos
//en un grafo dirigido
#include <iostream>
#include <vector>
#include <queue>
#include <stack>
using namespace std;

int main()
{
    //Matriz de adyacencia
    int matriz[5][5] = {
        {0, 13, 0, 15, 0},
        {0, 0, 9, 65, 0},
        {12, 0, 43, 1, 0},
        {0, 0, 0, 0, 1},
        {0, 3, 0, 21, 0}
    };
    /**
     * @param nodoA Es nuestro nodo de inicio
     * @param nodoB Es nuestro nodo de destino
     * @param visitados Es un vector que nos indica si un nodo ya fue visitado
     * @param padres Es un vector que nos indica el nodo padre de cada nodo
     * @param cola Es una cola que nos ayuda a recorrer el grafo, guarda los nodos
     * que van hacer visitados el "pair" es un par de datos, que se combinan en uno solo
     * el "greater" sirve para comparar dos elementos
     */

    int nodoA = 0;
    int nodoB = 4;
    vector<bool> visitados(5, false);
    vector<int> padres(5, -1);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> cola;

    /**
     * Insertamos el nodo de inicio en la cola, el "make pair" sirve para crear un par
     * y Mientras la cola no este vacia, obtenemos el nodo con menor peso y lo sacamos de la cola
     * si el nodo no ha sido visitado, lo marcamos como visitado
     * 
     * Despues recorremos todos los nodos adyacentes al nodo actual, si el nodo no ha sido visitado
     * metemos el peso del nodo actual mas el peso del nodo adyacente a la cola y guardamos el nodo actual
    */

    cola.push(make_pair(0, nodoA));
    while(!cola.empty()){
        int nodo = cola.top().second;
        cola.pop();
        if(!visitados[nodo]){
            visitados[nodo] = true;
            for(int i = 0; i < 5; i++){
                if(matriz[nodo][i] != 0 && !visitados[i]){
                    cola.push(make_pair(matriz[nodo][i], i));
                    padres[i] = nodo;
                }
            }
        }
    }
    /**
     * Imprimimos el camino mas corto, si el nodo final
     * no tiene padre, significa que no hay camino
     */

    int i=0; 
    int escribir[100];
    cout << "Camino mas corto: ";
    if(padres[nodoB] == -1){
        cout << "No hay camino" << endl;
    }else{
        //Si hay camino
        //Mientras el nodo no sea el inicial
        while(nodoB != nodoA){
            //Imprimir el nodo

            //Ir al padre del nodo
            nodoB = padres[nodoB];
            escribir[i]=nodoB;
            i++;
        }
        //Imprimir el nodo inicial
        for(int j=i-1;j>=0;j--){
            cout<< escribir[j] << "-";
        }
        cout << "-" << nodoA << endl;
    }
    return 0;
}
