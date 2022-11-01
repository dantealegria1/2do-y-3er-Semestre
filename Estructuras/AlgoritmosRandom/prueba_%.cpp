#include <iostream>
using namespace std;
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
		/*
		numero=4
		
		-primer vuelta-
		vec[0]=0
		x=1
		numero=2
		
		-segunda vuelta-
		vec[1]=0
		x=2
		numero=1
		
		-tercer vuelta-
		vec[2]=1
		x=3
		numero=0
		*/
	
	}
	for(int n=x-1;n>=0;n--)
	{
		cout<<vec[n];
		/*
		n=3-1
		n>=0
		cout<<vec[2]=1
		n--
		n>=0
		cout<<vec[1]=0
		n--
		n>=0
		cout<<vec[0]=0
		*/
	}
	for(int n=x-1;n>=0;n--)
	{
		
	}
		cout<<" "<<endl;
}
int main()
{
	int x;
	cout<<"dame x"<<endl;
	cin>>x;
	//% si es par es 0 sino es 1
	cout<<x%2<<"/"<<x/2<<endl;
	bin(x);
}
