//tomar 6 valores aleatorios de una matriz sin repetir
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    string matriz[10];
    string matriz2[10];
    matriz[0]="000000";
    matriz[1]="000001";
    matriz[2]="000010";
    matriz[3]="000011";
    matriz[4]="000100";
    matriz[5]="000101";
    matriz[6]="000110";
    matriz[7]="000111";
    matriz[8]="001000";
    matriz[9]="001001";
    srand(time(NULL));
    int aleatorio;
    for(int i=0;i<6;i++)
    {
        aleatorio=rand()%10;
        matriz2[aleatorio]=matriz[aleatorio];
        cout<<matriz2[aleatorio]<<endl;
    }

}
