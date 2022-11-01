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
        {0, 17, 0, 5, 0},
        {0, 0, 99, 65, 0},
        {12, 0, 43, 1, 0},
        {0, 0, 0, 0, 1},
        {0, 3, 0, 21, 0}
    }; 
    //Vector de visitados
    vector<bool> visitados(5, false);
    //Vector de padres
    vector<int> padres(5, -1);
    //Vector de distancias
    vector<int> distancias(5, 999999);
    //Cola de prioridad
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> cola;
    //Nodo inicial
    int nodo_inicial = 0;
    //Nodo final
    int nodo_final = 4;
    //Distancia del nodo inicial a si mismo
    distancias[nodo_inicial] = 0;
    //Insertar el nodo inicial en la cola
    cola.push(make_pair(0, nodo_inicial));
    //Mientras la cola no este vacia
    while(!cola.empty())
    {
        //Obtener el nodo con menor distancia
        int nodo_actual = cola.top().second;
        //Sacar el nodo de la cola
        cola.pop();
        //Si el nodo no ha sido visitado
        if(!visitados[nodo_actual])
        {
            //Marcar el nodo como visitado
            visitados[nodo_actual] = true;
            //Recorrer los nodos adyacentes
            for(int i = 0; i < 5; i++)
            {
                //Si el nodo adyacente existe
                if(matriz[nodo_actual][i] != 0)
                {
                    //Si la distancia del nodo actual mas la distancia del nodo adyacente es menor a la distancia del nodo adyacente
                    if(distancias[nodo_actual] + matriz[nodo_actual][i] < distancias[i])
                    {
                        //Actualizar la distancia del nodo adyacente
                        distancias[i] = distancias[nodo_actual] + matriz[nodo_actual][i];
                        //Actualizar el padre del nodo adyacente
                        padres[i] = nodo_actual;
                        //Insertar el nodo adyacente en la cola
                        cola.push(make_pair(distancias[i], i));
                    }
                }
            }
        }
    }
    //Imprimir la distancia del nodo inicial al nodo final
    cout << "Distancia: " << distancias[nodo_final] << endl;
    //Pila para guardar el camino
    stack<int> camino;
    //Nodo actual
    int nodo_actual = nodo_final;
    //Mientras el nodo actual no sea el nodo inicial
    while(nodo_actual != nodo_inicial)
    {
        //Insertar el nodo actual en la pila
        camino.push(nodo_actual);
        //Actualizar el nodo actual
        nodo_actual = padres[nodo_actual];
    }
    //Insertar el nodo inicial en la pila
    camino.push(nodo_inicial);
    //Imprimir el camino
    while(!camino.empty())
    {
        cout <<"->"<< (camino.top())+1 ;
        camino.pop();
    }

    cout << endl;
    return 0;
}