
#include <iostream>
#include <stdlib.h>
using namespace std;

typedef struct nodo {
    int nro;
    struct nodo* izq, * der;
}*ABB;

ABB crearNodo(int x)
{
    ABB nuevoNodo = new(struct nodo);
    nuevoNodo->nro = x;
    nuevoNodo->izq = NULL;
    nuevoNodo->der = NULL;

    return nuevoNodo;
}

void insertar(ABB& arbol, int x)
{
    if (arbol == NULL)
    {
        arbol = crearNodo(x);
        cout << "\n\t  Insertado..!" << endl << endl;
    }
    else if (x < arbol->nro)
        insertar(arbol->izq, x);
    else if (x > arbol->nro)
        insertar(arbol->der, x);
}
ABB arbolEspejo(ABB arbol)
{
    ABB temp;

    if (arbol != NULL)
    {
        temp = arbol->izq;
        arbol->izq = arbolEspejo(arbol->der);
        arbol->der = arbolEspejo(temp);
    }
    return arbol;
}
void verArbol(ABB arbol, int n)
{
    if (arbol == NULL)
        return;
    verArbol(arbol->der, n + 1);

    for (int i = 0; i < n; i++)
        cout << "   ";

    cout << arbol->nro << endl;

    verArbol(arbol->izq, n + 1);
}


int main() {

    ABB arbol = NULL;
    int n;  // numero de nodos del arbol
    int x; // elemento a insertar en cada nodo

    cout << "\n\t\t   ARBOL BINARIO DE BUSQUEDA  ( ABB ) \n\n";

    cout << " Numero de nodos del arbol:  ";
    cin >> n;
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << " Numero del nodo " << i + 1 << ": ";
        cin >> x;
        insertar(arbol, x);
    }

    ABB espejo;
    espejo = NULL;

    cout << "\n\n Arbol incial \n\n";

    verArbol(arbol, 0);

    cout << "\n\n Arbol espejo \n\n";

    espejo = arbolEspejo(arbol);

    verArbol(espejo, 0);



}
