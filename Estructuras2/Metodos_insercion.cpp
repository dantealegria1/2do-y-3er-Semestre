//Dante Alejandro Alegria Romero
//265853
//Metodos de insercion
#include <iostream>
using namespace std;
void insercionBinaria(int A[], int n)
{
	int i, j, aux, izq, der, m;
	for (i = 1; i < n; i++)
	{
		aux = A[i];
		izq = 0;
		der = i - 1;
		while (izq <= der)
		{
			m = ((izq + der) / 2);
			if (aux < A[m])
				der = m - 1;
			else
				izq = m + 1;
		}
		j = i - 1;
		while (j >= izq)
		{
			A[j + 1] = A[j];
			j = j - 1;
		}
		A[izq] = aux;
	}
}
void insercionDirecta(int A[], int n)
{

	int i, j, v;

	for (i = 1; i < n; i++)
	{
		v = A[i];
		j = i - 1;
		while (j >= 0 && A[j] > v)
		{
			A[j + 1] = A[j];
			j--;
		}

		A[j + 1] = v;
	}
}
void leeCadena(int cant, int n[])
{
	int i;
	for (i = 0; i < cant; i++)
	{
		cout << "Ingresa numero " << i + 1 << ": ";
		cin >> n[i];
	}

}

void muestraCadena(int cant, int n[])
{
	int i;
	for (i = 0; i < cant; i++)
	{
		cout << n[i] << endl;
	}
}

int main()
{
		int opcion;
	do{
		cout << "Metodos de insercion" << endl;
		cout << " " << endl;
		cout << "1. Insercion directa" << endl;
		cout << "2. Insercion binaria" << endl;
		cout << "4. salir" << endl;
		cin >> opcion;
		switch (opcion)
		{
		case 1:
			cout << "Metodo de insercion directa" << endl;
			int A[100], n;
			do {
				cout << "Cantidad de numeros a ingresar: "; cin >> n;
				if (n <= 0 || n > 100)
					cout << "Debe ingresar un valor  > a 0 y < a " << 100 << endl;
			} while (n <= 0 || n > 100);

			leeCadena(n, A);
			insercionDirecta(A, n);
			muestraCadena(n, A);
			system("PAUSE");
			system("CLS");
			break;
		case 2:
			cout << "Metodo de insercion binaria" << endl;
			int B[100], n_1;
			do {
				cout << "Cantidad de numeros a ingresar: "; cin >> n_1;
				if (n_1 <= 0 || n_1 > 100)
					cout << "Debe ingresar un valor  > a 0 y < a " << 100 << endl;
			} while (n_1 <= 0 || n_1 > 100);

			leeCadena(n_1, B);
			insercionBinaria(B, n_1);
			muestraCadena(n_1, B);
			system("PAUSE");
			system("CLS");
			break;
		case 4:
			cout << "salir" << endl;
			break;
		default:
			cout << "Opcion no valida" << endl;
			system("PAUSE");
			system("CLS");
			break;
		}
	} while (opcion != 4);
		return 0;
}

