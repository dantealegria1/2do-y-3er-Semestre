//Eliminacionn de Gauss-Jordan
//Dante Alejandro Alegria Romero 235863
#include <bits/stdc++.h>
using namespace std;
#define M 10
//Funcion para imrpimir la matriz
void PrintMatrix(float a[][M], int n)
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= n; j++)
          cout << a[i][j] << " ";
        cout << endl;
    }
}
 
// Funcion para redcir la matriz
int PerformOperation(float a[][M], int n)
{
    int i, j, k = 0, c, flag = 0, m = 0;
    float pro = 0;
     
    // Aqui hacemos las operaciones
    for (i = 0; i < n; i++)
    {
        if (a[i][i] == 0)
        {
            c = 1;
            while ((i + c) < n && a[i + c][i] == 0)
                c++;           
            if ((i + c) == n) {
                flag = 1;
                break;
            }
            for (j = i, k = 0; k <= n; k++)
                swap(a[j][k], a[j+c][k]);
        }
 
        for (j = 0; j < n; j++) {
             
            // Excluimos todos los valores de 1 sean igual a j
            if (i != j) {
                 
                // Convirtiendo la matriz a reducida
                // Haciendola matriz diagonal
                float pro = a[j][i] / a[i][i];
                for (k = 0; k <= n; k++)                
                    a[j][k] = a[j][k] - (a[i][k]) * pro;               
            }
        }
    }
    return flag;
}
 
//Funcion para imprimir el resultado si solo existe
//una unica solucion  dependiendo de la matriz ingresada 
// To check whether infinite solutions
// exists or no solution exists
int CheckConsistency(float a[][M], int n, int flag)
{
    int i, j;
    float sum;
     
    // flag == 2 para las soluciones infinitias
    // flag == 3 para los que no tengan solucion
    flag = 3;
    for (i = 0; i < n; i++)
    {
        sum = 0;
        for (j = 0; j < n; j++)       
            sum = sum + a[i][j];
        if (sum == a[i][j])
            flag = 2;       
    }
    return flag;
}

void PrintResult(float a[][M], int n, int flag)
{
    cout << "El resultado es: ";
 
    if (flag == 2)    
      cout << "Tiene infinitas soluciones" << endl;   
    else if (flag == 3)    
      cout << "No Tiene solucion" << endl;
     
     
	//aqui imprimimos la solucion
    else {
        for (int i = 0; i < n; i++)        
            cout << a[i][n] / a[i][i] << " ";       
    }
}
// Main
int main()
{
	float a[M][M];
	//aqui editamos la matriz
	for(int i=0; i<3;i++)
	{
		for (int k=0; k<4;k++)
		{
			cout<<"dame el valor enn la posicion "<<"{"<<i+1<<"}"<<"{"<<k+1<<"}"<<endl;
			cin>>a[i][k];
		}
	}
                      
    // Orden de la matriz
    int n = 3, flag = 0;
     
    // Hacer la transformacion de la matriz
    flag = PerformOperation(a, n);
     
    if (flag == 1)    
        flag = CheckConsistency(a, n, flag);   
 
    // Imprimir la final de la la matriz
    cout << "Matriz final: " << endl;
    PrintMatrix(a, n);
    cout << endl;
     
    // Imprimir las soluciones si no son infinitas
    //imprime su valor en decimal, no en fraccion
    PrintResult(a, n, flag);
 
    return 0;
}
