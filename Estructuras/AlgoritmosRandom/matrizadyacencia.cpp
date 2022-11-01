//almacenar un grafo en una lista de adyacencia con nodos
#include <iostream>
using namespace std;
void insertarlista(int lista[][2], int n, int m)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<"ingrese el nodo origen y el nodo destino: ";
        cin>>lista[i][0]>>lista[i][1];
    }
}
void mostrarlista(int lista[][2], int n, int m)
{
    int i;
    for(i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
           cout<<lista[i][0]<<":"<<"->"<<lista[i][1];
        }
        cout<<" "<<endl;
    }
}
using namespace std;
int main()
{
    int n, m;
    cout<<"ingrese el numero de nodos: ";
    cin>>n;
    cout<<"ingrese el numero de aristas: ";
    cin>>m;
    int lista[n][2];
    insertarlista(lista, n, m);
    mostrarlista(lista, n, m);
    return 0;
}
