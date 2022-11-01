// ordenamiento_seleccion.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;
void selection_sort(int* vector, int taille)
{
	int i, j, min, aux;
	for (i = 0; i < taille - 1; i++)
	{
		min = i;
		for (j = i + 1; j < taille; j++)
		{
			if (vector[j] < vector[min])
				min = j;
		}
		aux = vector[i];
		vector[i] = vector[min];
		vector[min] = aux;
	}
}
int main()
{
	int vector[10];
	cout << "Ingrese los elementos del vector: "<<endl;
	for (int i = 0; i < 10; i++)
	{
		cout <<"Numero "<< i + 1<<"-";
		cin >> vector[i];
	}
	selection_sort(vector, 10);
	for (int i = 0; i < 10; i++)
		cout << vector[i] << " ";
	cout << endl;
	return 0;
}
