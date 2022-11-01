
#include<iostream>
#include<conio.h>
using namespace std;
int a[50];
void merge(int, int, int);

void merge_sort(int izquierda, int derecha) {
    int medio;
    if (izquierda < derecha)
    {
        medio = (izquierda + derecha) / 2;

        merge_sort(izquierda, medio);
        merge_sort(medio + 1, derecha);
        merge(izquierda, medio, derecha);
    }
}

void merge(int izquierda, int medio, int derecha) {
    int h, i, j, b[50], k;
    h = izquierda;
    i = izquierda;
    j = medio + 1;

    while ((h <= medio) && (j <= derecha)) {
        if (a[h] <= a[j]) {
            b[i] = a[h];
            h++;
        }
        else
        {
            b[i] = a[j];
            j++;
        }
        i++;
    }
    if (h > medio) {
        for (k = j; k <= derecha; k++) {
            b[i] = a[k];
            i++;
        }
    }
    else
    {
        for (k = h; k <= medio; k++) {
            b[i] = a[k];
            i++;
        }
    }
    for (k = izquierda; k <= derecha; k++)
    {
        a[k] = b[k];
    }
}
int main() {
    int num;
    cout << "   PROGRAMA MERGE SORT         " << endl;
    cout << endl << endl;
    cout << "ingrese la cantidad de elementos" << endl;
    cin >> num;
    cout << endl;
    cout << "tus elementos son: " << endl;
    for (int i = 1; i <= num; i++) {
        cin >> a[i];
    }
    merge_sort(1, num);
    cout << endl;
    cout << endl << endl;
    cout << "nuevo orden: " << endl;
    for (int i = 1; i <= num; i++) {
        cout << a[i] << "   ";
    }
    return 0;
}