/*Capturar o asignar un grafo no dirigido en la matriz de adyacencia e imprimir las aristas del grafo.*/
#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int n;
    cout<<"Ingrese el numero de vertices del grafo: ";
    cin>>n;
    int matriz[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            matriz[i][j]=0;
        }
    }
    int a,b;
    cout<<"Ingrese las aristas del grafo: "<<endl;
    cout<<"Ingrese el vertice de inicio: ";
    cin>>a;
    cout<<"Ingrese el vertice de fin: ";
    cin>>b;
    while(a!=-1 && b!=-1)
    {
        matriz[a][b]=1;
        matriz[b][a]=1;
        cout<<"Ingrese el vertice de inicio: ";
        cin>>a;
        cout<<"Ingrese el vertice de fin: ";
        cin>>b;
    }
    cout<<"Las aristas del grafo son: "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(matriz[i][j]==1)
            {
                cout<<"("<<i<<","<<j<<")"<<endl;
            }
        }
    }
    system("pause");
    return 0;
}