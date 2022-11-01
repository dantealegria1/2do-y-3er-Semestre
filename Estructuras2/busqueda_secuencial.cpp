
#include <iostream>
using namespace std;

int main()
{
    int lista[100];
    int valor, posicion = 0, n;
    bool encontrado = false;

    cout << " ingresa la longitud de la lista: " << endl;
    cin >> n;
    for (int i = 0; i < n; i++) 
    {
        cout << i + 1 << ".-  "; cin >> lista[i];
    }

    cout << "Ingrese el valor a buscar: \t"; cin >> valor;

    while (encontrado == false && posicion < n)
    {
        if (valor == lista[posicion])
        {
            encontrado = true;
            break;
        }
        posicion++;
    }

    if (encontrado == false)
    {
        cout << "su valor " << valor << " no se ha encontrado" << endl;
    }
    else
    {
        cout << "su valor " << valor << " se ha encontrado en la posicion [" << posicion + 1 << "]" << endl;
    }
    system("pause");
    return 0;
}