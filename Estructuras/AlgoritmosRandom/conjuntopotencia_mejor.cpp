#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int i;
	cout<<"dame el numero de subconjuntos"<<endl;
	int num;
	cin>>num;
	int vec[num];
	char vector[num];
	for( i=0; i<num;i++)
	{
		cout<<"dame el valor de la posicion: "<<i<<"/"<<num<<endl;
		cin>>vector[i];
	}
	int x=0;f
	while(num!=0)
	{
		vec[x]=num%2;
		x++;
		num=num/2;
	for(int n=x-1;n>=0;n--)
	{
		if(vec[n]=1)
		{
			cout<<vector[n];
		}
	}
			cout<<" "<<endl;
	}

}
