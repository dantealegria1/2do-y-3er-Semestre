//recorrer grafo en altura
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    cout<<"Escribe la matriz de adyacencia del grafo"<<endl;
    int nodo;
    cin>>nodo;
    int **matriz;
    matriz=new int*[nodo];
    for(int i=0;i<nodo;i++)
    {
        matriz[i]=new int[nodo];
        for(int j=0;j<nodo;j++)
        {
            cin>>matriz[i][j];
        }
    }
    //imprimir la matriz
    for(int i=0;i<nodo;i++)
    {
        for(int j=0;j<nodo;j++)
        {
            cout<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }

}
