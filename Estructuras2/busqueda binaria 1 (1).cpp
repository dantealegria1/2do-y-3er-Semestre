
#include <iostream>
#include <stdlib.h>

using namespace std;

//Busqueda binaria
int main()
{
	const int n = 9;
	int i, inf, sup, mitad, dato;
	bool encontrado = false;
	int numeros[n] = {-4,-1,0,2,7,12,22,45,100};
	cout<<"VECTOR:  ";
	for(i = 0; i < n; i++)
	{
		cout<<numeros[i]<<"  ";
	}	
	cout<<"\nPosicion: 0   1  2  3  4  5   6    7    8\n";

	cout<<"\n";
	cout<<"Ingresa el dato que estas buscando: ";
	cin>>dato;	
	
	inf = 0;
	sup = n-1;

	while(inf <= sup)
	{
		mitad = (inf+sup)/2;
		
		if(dato > numeros[mitad])
		{
			inf = mitad + 1;
		}
		else if(dato < numeros[mitad])
		{
			sup = mitad - 1;
		}
		else
		{
			encontrado = true;
			break;
		}
	}

	if(encontrado == true)
	{
		cout<<"\nEl numero "<<dato<<" a sido encontrado en la posicion "<<mitad<<endl;
	}
	else
	{
		cout<<"\nEl numero no ha sido encontrado";
	}
}
