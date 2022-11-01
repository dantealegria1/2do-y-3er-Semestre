//Encontrar el camino mas corto
#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d,e;
    int matriz[5][5];
    int aristas;
    cout<<"Ingrese el numero de aristas: "<<endl;
    cin>>aristas;
    for(int i=0; i<aristas;i++ )
    {
        int peso;
        char inicio,fin;
        cout<<"Dame donde inicia la arista: "<<endl;
        cin>>inicio;
        cout<<"Dame donde termina la arista: "<<endl;
        cin>>fin;
        cout<<"Dame el peso de la arista: "<<endl;
        cin>>peso;
        if(inicio=='a')
        {
            if(fin=='b')
            {
                matriz[a][b]=peso;
            }
            else if(fin=='c')
            {
                matriz[a][c]=peso;
            }
            else if(fin=='d')
            {
                matriz[a][d]=peso;
            }
            else if(fin=='e')
            {
                matriz[a][e]=peso;
            }
        }
    }
        int max=0;
        for(int i=0; i<5;i++ )
        {
            for(int j=0; j<5;j++ )
            {
                if(matriz[i][j]>max)
                {
                    max=matriz[i][j];
                }
            }
        }
        cout<<"El camino mas largo es: "<<max<<endl;

}