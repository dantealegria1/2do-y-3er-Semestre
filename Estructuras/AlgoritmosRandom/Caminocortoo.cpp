//Dante Alegria Romero
//Encontrar el camino mas corto entre dos nodos
//en un grafo dirigido
#include <iostream>
#include <vector>
#include <queue>
#include <stack>
using namespace std;

void ElegirMenor(int &menor, int &pos, vector<int> &distancias, vector<bool> &visitados){
    menor = 1000000000;
    pos = -1;
    for(int i = 0; i < distancias.size(); i++){
        if(distancias[i] < menor && !visitados[i]){
            menor = distancias[i];
            pos = i;
        }
    }
}
int main()
{
    cout<<"hola"<<endl;
    int n, m, a, b, c, origen, destino;
    cin >> n >> m;
    vector<vector<pair<int, int>>> grafo(n);
    vector<int> distancias(n, 1000000000);
    vector<bool> visitados(n, false);
    vector<int> antecesores(n, -1);
    for(int i = 0; i < m; i++){
        cin >> a >> b >> c;
        grafo[a].push_back(make_pair(b, c));
    }
    cin >> origen >> destino;
    distancias[origen] = 0;
    int menor, pos;
    ElegirMenor(menor, pos, distancias, visitados);
    while(pos != -1){
        visitados[pos] = true;
        for(int i = 0; i < grafo[pos].size(); i++){
            if(distancias[pos] + grafo[pos][i].second < distancias[grafo[pos][i].first]){
                distancias[grafo[pos][i].first] = distancias[pos] + grafo[pos][i].second;
                antecesores[grafo[pos][i].first] = pos;
            }
        }
        ElegirMenor(menor, pos, distancias, visitados);
    }
    stack<int> camino;
    int actual = destino;
    while(actual != -1){
        camino.push(actual);
        actual = antecesores[actual];
    }
    while(!camino.empty()){
        cout << camino.top() << " ";
        camino.pop();
    }
    cout << endl;
    return 0;
}
