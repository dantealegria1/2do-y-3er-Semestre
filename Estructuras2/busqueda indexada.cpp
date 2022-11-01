
#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;
 
void busquedaindexada(int arr[], int n, int k)
{
    int elementos[20], indices[20], i, pos = 0;
    int j = 0, ind = 0, inicio, final;
    for (i = 0; i < n; i += 3)
	 {
        elementos[ind] = arr[i];
        indices[ind] = i;
        ind++;
    }
    if (k < elementos[0])
	 {
        printf("Elemento no encontrado. ");
        exit(0);
    }
    else {
        for (i = 1; i <= ind; i++)
            if (k <= elementos[i]) {
                inicio = indices[i - 1];
                final = indices[i];
                pos = 1;
                break;
            }
    }
    if (pos == 0) {
        inicio = indices[i - 1];
        final = n;
    }
    for (i = inicio; i <= final; i++) {
        if (k == arr[i]) {
            j = 1;
            break;
        }
    }
    if (j == 1)
        printf("Fue Encontrado en la posicion %d", i+1);
    else
        printf("No encontrado. ");
}
 

int main()
{
 
    int arr[] = {6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k;
    
    cout<<"Arreglo: "<<endl;
    for(int i=0; i<n; i++)
    {
    	cout<<arr[i]<<" -> ";
	}
	cout<<"\n";
	
    cout<<"Ingrese numero a buscar: ";
    cin>>k;
    
    busquedaindexada(arr, n, k);
}
