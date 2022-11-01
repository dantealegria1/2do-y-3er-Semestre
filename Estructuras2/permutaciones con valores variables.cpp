#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int n;
	cout<<"Dame el largo del vector"<<endl;
	cin>>n;
	int vector[n];
	for(int i=0;i<n;i++)
	{
		cout<<"Dame el valor en la posicion "<<i+1<<endl;
		cin>>vector[i];
	}
	
	cout<<"_____________"<<endl;
	cout<<"Permutaciones"<<endl;
	cout<<"_____________"<<endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (vector[i] != vector[j] )
			{
					cout << vector[i] << "," << vector[j] << endl;
			}
		}
	}
	
		cout<<"_____________"<<endl;
		cout<<"Combinaciones"<<endl;
		cout<<"_____________"<<endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (vector[i] != vector[j+1] && i<j )
			{
					cout << vector[i] << "," << vector[j] << endl;
			}
		}
	}
}
