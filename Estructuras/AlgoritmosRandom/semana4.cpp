#include <iostream>
using namespace std;
void decbin(int numero)
{
	int vector[100], x=0;
	while(numero!=0)
	{
		vector[x]=numero%2;
		numero=numero/2;
		//cout vector[x]
		x++;
	}
	cout<<"Numero en binario: "<<endl;
	for(int i=x-1;i>=0;i--)
	{
		cout<<vector[i];
	}
	cout<<endl;
}
int main()
{
	int cantidad;
	cout<<"Hasta que numero hago la tabla"<<endl;
	cin>>cantidad;
	char Conj[cantidad];
	int vector[cantidad];
	for(int i=0;i<cantidad;i++)
	{
		cout<<"elemento "<<i+1<<"/"<<
	}
}
