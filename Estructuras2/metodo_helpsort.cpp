
#include <iostream>
using namespace std;

// Imprimir el vector
void imprimirVector(int arr[], int tam) {
    for (int x = 0; x < tam; x++)
        cout << arr[x] << " ";
    cout << "\n";
}

void heapify(int vector[], int tam, int indice) {
    int mayor = indice; // Padre
    int izq = 2 * indice + 1; // Nodo izq
    int der = 2 * indice + 2; // Nodo der

    if (izq < tam && vector[izq] > vector[mayor])
        mayor = izq;

    if (der < tam && vector[der] > vector[mayor])
        mayor = der;

    if (mayor != indice) {
        swap(vector[indice], vector[mayor]);
        heapify(vector, tam, mayor);
    }
}

// Funcion principal para heapsort
void heapSort(int arr[], int tam) {

    for (int i = tam / 2 - 1; i >= 0; i--)
        heapify(arr, tam, i);

    // Heapsort! (Ordenamiento)
    for (int i = tam - 1; i >= 0; i--) {

        swap(arr[0], arr[i]);
        imprimirVector(arr, tam);

        heapify(arr, i, 0);
    }
}

// Funcion Principal
int main() {
    int vector[] = { 1, 12, 9, 5, 6, 10 };
    int n = sizeof(vector) / sizeof(vector[0]);
    cout << "Vector desordenado:\n";
    imprimirVector(vector, n);
    cout << "\n";

    heapSort(vector, n);

    cout << "\nVector ordenado: \n";
    imprimirVector(vector, n);
}