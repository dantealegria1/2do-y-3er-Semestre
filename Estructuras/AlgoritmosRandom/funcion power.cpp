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
	int i,j,limite;
	unsigned int cantidad,numero;
	int x = 0, y;
	
	int vector[limite];
    string A[100];
    char conjunto[limite];
    
    int filas = pow(2,limite);
    int tablaBin[filas] [limite];
    
    
    cout<<"Ingrese el numero de elementos del conjunto"<<endl;
    cin>>limite;
    for(i=0;i<limite;i++){
       cout<<"Ingrese el elemento: "<<i+1<<"/"<<limite<<" ";
       cin>>A[i];
    }
    cout<<"Tabla binaria"<<endl;
        for(int r=0; r<filas; r++)
		{
        	for(int c=0; c<limite; c++)
			{
            	tablaBin[r][c]=0;
        	}
    	}
    	
       for( int n=1; n<filas; n++){
        numero = n;
        x=0;
        while(numero != 0)
        {
            vector[x] = numero%2;
            numero = numero/2;
            cout<<vector[x];
            x++;
        }
        
        y=limite-1;
        
        for(int i=0; i<x; i++)
        {
            tablaBin[n][y] =vector[i];
            y--;
        }
        
    }
    cout<<"-------------------"<<endl;
    cout<<"conjunto potencia: "<<endl;
    cout<<"-------------------"<<endl;
    cout<<"{}"<<endl;
    for(i=0;i<potencia(2,limite);i++){
        for(j=0;j<limite;j++){
          if(i & (1<<j))
            cout<<"{"<<A[j]<<"}";
        }
        cout<<"\n";
    }
}
