//dante alejandro alegria romero
#include <iostream>
using namespace std;
int main()
{
	int num;
	int numero;
	int vec[numero];
	cout<<"Dame el valor que deseas convertir"<<endl;
	cin>>num;
	int x=0;
	while(num!=0)
	{
		for(numero=0;numero>num;numero++)
		vec[x]=numero%2;
		x++;
		numero/=2;
	
	}
	for(int n=x-1;n>=0;n--)
	{
		cout<<vec[n];
	}
	
}
