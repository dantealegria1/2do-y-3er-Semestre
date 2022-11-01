//almacenar un grafo en listas de adyacencia
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int ady;
    cout<<"ingrese la cantidad de nodos"<<endl;
    int nodo;
    cin>>nodo;
    int **lista;
    lista=new int*[nodo];
    for(int i=0;i<nodo;i++)
    {
        cout<<"ingrese la cantidad de nodos adyacentes al nodo "<<i<<endl;
        cin>>ady;
        lista[i]=new int[ady+1];
        for(int j=0;j<ady+1;j++)
        {
            if(j==0)
            {
                lista[i][j]=ady;
            }
            else
            {
                cout<<"ingrese el nodo adyacente "<<j<<" al nodo "<<i<<endl;
                cin>>lista[i][j];
            }
        }
    }
    //imprimir la lista
    for(int i=0;i<nodo;i++)
    {
    	cout<<"el nodo "<<i<<" tiene como adyacente al nodo: ";
        for(int j=1;j<lista[i][0]+1;j++)
        {
            cout<<lista[i][j]<<"-";
        }
        cout<<" "<<endl;
    }
}
