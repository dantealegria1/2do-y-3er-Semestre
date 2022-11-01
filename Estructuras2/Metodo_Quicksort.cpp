//METODO QUICKSORT 
#include <iostream>
using namespace std;


void quicksort(double arr[], int izq, int der)
{
    //creacion de variables
    int i = izq;
    int j = der;
    double pivote = arr[(izq + der) / 2];
    do {
        while (arr[i] < pivote)
        {
            i++;
        }
        while (arr[j] > pivote)
        {
            j--;
        }
        if (i <= j) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    } while (i <= j);

    if (izq < j) {
        quicksort(arr, izq, j);
    }
    if (i < der) {
        quicksort(arr, i, der);
    }
}

int main()
{
    double arreglo[10] = { -2,5,32,54,1,75,0,44,3,-1 };
    cout << "Metodo QuickSort" << endl << endl;
    cout << "arreglo a ordenar: " << endl;
    cout << "-2,5,32,54,1,75,0,44,3,-1" << endl << endl;
    cout << "Método ordenado " << endl;
    quicksort(arreglo, 0, 9);
    for (int i = 0; i < 10; i++) {
        cout << arreglo[i] << "->";
    }
    cout << endl;
    system("pause");
    return 0;
}








