//definimos la matriz
#include <iostream>
using namespace std;


int dijkstra (int matriz[5][5], int inicio, int fin) {
int distancia[5];
int visitado[5];
int contador, minimo, siguiente;
for (int i = 0; i < 5; i++) {
distancia[i] = 9999;
visitado[i] = 0;
}
distancia[inicio] = 0;
for (contador = 0; contador < 5; contador++) {
minimo = 9999;
for (int i = 0; i < 5; i++) {
if (distancia[i] < minimo && !visitado[i]) {
minimo = distancia[i];
siguiente = i;
}
}
visitado[siguiente] = 1;
for (int i = 0; i < 5; i++) {
if (!visitado[i]) {
if (minimo + matriz[siguiente][i] < distancia[i]) {
distancia[i] = minimo + matriz[siguiente][i];
}
}
}
}
return distancia[fin];
}

int main() {
    int matriz[5][5] = {
{0, 1, 0, 0, 0},
{1, 0, 1, 1, 0},
{0, 1, 0, 0, 1},
{0, 1, 0, 0, 1},
{0, 0, 1, 1, 0}
};

int inicio, fin;
cout << "Ingrese el nodo de inicio: ";
cin >> inicio;
cout << "Ingrese el nodo de fin: ";
cin >> fin;
cout << "La distancia mas corta es: " << dijkstra(matriz, inicio, fin) << endl;
return 0;
}