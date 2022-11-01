//dante alegria romero
#include<iostream>
#include <stdlib.h>
using namespace std;

void decBin(int numero)
{
    int vector[100], x = 0;
    
    while(numero != 0)
    {
        vector[x] = numero%2;
        numero = numero/2;
        x++;
    }
    cout<<"Numero en binario: ";
    
    for(int i = x-1; i >= 0; i--)
    {
        cout<<vector[i];
    }
    cout<<endl;
}
int potencia(int b,int e){
    int i;
    int pot=1;
    for(i=1;i<=e;i++){
          pot=pot*b;
    }
    return pot;
}
int main()
{
	int i,j,limite,cantidad;
    string A[100];
    cout<<"Ingrese el numero de elementos del conjunto"<<"\n";
    cin>>limite;
    for(i=0;i<limite;i++){
       cout<<"Ingrese el elemento: "<<i+1<<" ";
       cin>>A[i];
    }
    for(i=0;i<potencia(2,limite);i++){
        for(j=0;j<limite;j++){
          if(i & (1<<j))
            cout<<A[j];
        }
        cout<<"\n";
    }
    cout<<"Tabla binaria hasta el numero: "<<limite<<endl;
    for(int i=0; i<=limite; i++)
        decBin(i);
    system("pause");
    return 0;
}

