// DiagnosticoMeza.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int vector[4] = { 1,2,3,4 };
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (vector[i] != vector[j] )
			{
					cout << vector[i] << "," << vector[j] << endl;
			}
		}
	}
	cout<<"Combinaciones"<<endl;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (vector[i] != vector[j+1] && i<j )
			{
					cout << vector[i] << "," << vector[j] << endl;
			}
		}
	}
}
