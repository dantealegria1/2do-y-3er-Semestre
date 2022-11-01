#include <iostream>
using namespace std;

void decBin(int numero)
{
    int vector[100], x = 0;
    
    while(numero != 0)
    {
        vector[x] = numero%2;
        numero = numero/2;
        //cout<<vector[x];
        x++;
    }
    cout<<"Numero en binario";
    
    for(int i = x-1; i >= 0; i--)
    {
        cout<<vector[i];
    }
    cout<<endl;
}

int main(){
    int cantidad;
    cout<<"Hasta que numeroi hago la tabla: "; cin>>cantidad;
    for(int i=0; i<=cantidad; i++)
        decBin(i);
}
