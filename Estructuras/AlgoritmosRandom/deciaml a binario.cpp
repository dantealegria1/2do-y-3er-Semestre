//dante alejandro alegria romero
#include <iostream>
using namespace std;
void bin(int numero)
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
int main()
{
	int opc;
	int n;
	while(opc!=3)
	{
	cout<<"MENU"<<endl;
	cout<<"1. deciamal a binario"<<endl;
	cout<<"2. tabla hasta un  numero"<<endl;
	cout<<"3.Tabla de números binarios en base a los elementos de un conjunto"<<endl;
	cout<<"4. salir"<<endl;
	cin>>opc;
	if(opc==4)
	{
		cout<<"Saliendo"<<endl;
		return 0;
		system("PAUSE");
	}
	if(opc==1)
	{
		cout<<"Dame el numero que deseas convertir"<<endl;
		cin>>n;
		bin(n);
		system("PAUSE");
	}
	if(opc==2)
	{
		cout<<"Dame hasta que numero desea generar la tabla"<<endl;
		cin>>n;
		for(int a=0; a<n+1;a++)
		{
			cout<<a<<": ";
			bin(a);
		}
		system("PAUSE");
	}
	if(opc==3)
	{
		
	}
	system("CLS");
	}
}
