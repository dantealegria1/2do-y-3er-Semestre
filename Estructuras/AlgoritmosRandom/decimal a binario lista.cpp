//dante alejandro alegria romero
#include <iostream>
using namespace std;
int main()
{
	int numero;
	int vec[numero];
	cout<<"Dame el valor que deseas convertir"<<endl;
	cin>>numero;
	int x=0;
	int aux;
	while(numero!=0)
	{
		for(aux=0;aux>numero;aux++)
		{
			vec[x]=aux%2;
			x++;
			aux/=2;
		}
		for(int n=x-1;n>=0;n--)
		{
			cout<<vec[n];
		}
	}
}
