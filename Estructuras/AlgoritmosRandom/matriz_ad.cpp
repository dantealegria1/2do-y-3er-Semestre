/*Capturar o asignar un grafo no dirigido en la matriz de adyacencia e imprimir las aristas del grafo.*/
#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int n;
    int n2;
    cout<<"Ingrese el numero de vertices del grafo: ";
    cin>>n2;
    n=n2+1;
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
    cout<<"Cuando desee salir ingrese ambas aristas al 0"<<endl;
    cout<<"Ingrese el vertice de inicio: ";
    cin>>a;
    if(a==0)
    {
    	b==0;
	}else
	{
    cout<<"Ingrese el vertice de fin: ";
    cin>>b;
	}
    while(a!=0 && b!=0)
    {
        matriz[a][b]=1;
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
            if(matriz[i][j]==1 )
            {
                cout<<"("<<i<<","<<j<<")"<<endl;
            }
            
        }
    }
}
