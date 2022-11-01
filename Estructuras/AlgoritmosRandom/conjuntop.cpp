//dante alejandro alegria romero
#include <iostream>
#include <math.h>
using namespace std;
//funcion para convertir de decimal a binario
int bin(int numero)
{
	int vec[numero];
	int x=0;
	int aux;
	while(numero!=0)
	{
	
		vec[x]=numero%2;
		x++;
		numero/=2;
	
	}
	for(int n=x-1;n>=0;n--)
	{
		cout<<vec[n];
	}
		cout<<" "<<endl;
}
//funcion para sacar potencia
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
    cout<<"Ingrese el numero de elementos del conjunto"<<endl;
    cin>>limite;
    for(i=0;i<limite;i++){
       cout<<"Ingrese el elemento: "<<i+1<<"/"<<limite<<" ";
       cin>>A[i];
    }

    for(i=0;i<potencia(2,limite);i++){
        for(j=0;j<limite;j++){
          if(i & (1<<j))
            cout<<A[j];
        }
        cout<<"\n";
    }
            cout<<"potencia es igual a: "<<potencia<<endl;
        cout<<"pow es igual a: "<<pow(limite, i);
}
