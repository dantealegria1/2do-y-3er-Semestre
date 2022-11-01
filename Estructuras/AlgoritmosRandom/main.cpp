#include <iostream>
#include <math.h>
using namespace std;

void decBin(int numero)
{
    int vector[100], x = 0;
    
    while(numero != 0)
    {
        vector[x] = numero%2;
        numero = numero/2;
        //cout<<vector[x];
        x++;
    }
    cout<<"Numero en binario: ";
    
    for(int i = x-1; i >= 0; i--)
    {
        cout<<vector[i];
    }
    cout<<endl;
}

int main(){
    //Variables
    unsigned int cant, numero;
    int x = 0, y;
    
    //1. Capturar el conjunto en un vector
    cout<<"Dame la cantidad de elementos: ";
    cin>>cant;
    
    //Arreglos con tamaño dado po rel usuario
    char eleConj[cant];
    int vector[cant];
    
    //Captura de elementos del conjunto en un vector
    for(int i=0; i<cant; i++){
        cout<<"Elemento "<<i+1<<"/"<<cant<<": ";
        cin>>eleConj[i];
    }
    
    //2. Generar la tabla binaria en una matriz
    int filas = pow(2,cant);
    int tablaBin[filas] [cant];
    //asignar ceros a la matriz
    for(int r=0; r<filas; r++){
        for(int c=0; c<cant; c++){
            tablaBin[r][c]=0;
        }
    }
    
    //crear tabla binaria
    for( int n=1; n<filas; n++){
        numero = n;
        x=0;
        while(numero != 0)
        {
            vector[x] = numero%2;
            numero = numero/2;
            //cout<<vector[x];
            x++;
        }
        
        y=cant-1;
        
        for(int i=0; i<x; i++)
        {
            tablaBin[n][y] =vector[i];
            y--;
        }
    }
    
    
    //imprimir la matriz
    for(int r=0; r<filas; r++){
        for(int c=0; c<cant; c++){
            cout<<tablaBin[r][c];
        }
        cout<<endl;
    }
    //3. Imprimir el conjunto poterncia usando el vector y matriz
    for(int r=0; r<filas; r++){
        cout<<"{";
        for(int c=0; c<cant; c++){
            if (tablaBin[r][c] == 1)
                cout<<eleConj[c]<<",";
        }
        cout<<"}"<<endl;
    }
    
    //cout<<"Hasta que numeroi hago la tabla: "; cin>>cantidad;
    //for(int i=0; i<=cantidad; i++)
    //    decBin(i);
}
