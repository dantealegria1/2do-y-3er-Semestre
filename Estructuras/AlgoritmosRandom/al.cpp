//tomar 6 valores aleatorios de una matriz
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    int matriz[10];
    matriz[0]=1;
    matriz[1]=2;
    matriz[2]=3;
    matriz[3]=4;
    matriz[4]=5;
    matriz[5]=6;
    matriz[6]=7;
    matriz[7]=8;
    matriz[8]=9;
    matriz[9]=10;
    srand(time(NULL));
    int aleatorio;
    int aleatorio2;
    for(int i=0;i<6;i++)
    {
        aleatorio=rand()%10;
        aleatorio2=rand()%10;
        cout<<matriz[aleatorio]<<endl;
        //comprobar que no se repitan ninguno
        for(int j=0;j<10;j++)
        {
            while(matriz[j]==matriz[i])
            {
                matriz[j]=aleatorio2;
            
            }
        }
    }
    return 0;
}
