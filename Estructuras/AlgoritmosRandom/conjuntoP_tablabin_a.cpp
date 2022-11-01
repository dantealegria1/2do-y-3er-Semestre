//dante alejandro alegria romero
#include <iostream>
#include <math.h>
//el por que este esta mas cortito es por que este nunca lo convierte a binario ni nada
using namespace std;
int main()
{
	//declaracion de variables
	int i,j,limite,cantidad,opc;
    string A[100];
    
    //pido el largo del vector y lo llenamos
    cout<<"Ingrese el numero de elementos del conjunto"<<endl;
    cin>>limite;
    for(i=0;i<limite;i++){
       cout<<"Ingrese el elemento: "<<i+1<<"/"<<limite<<" ";
       cin>>A[i];
    }   
    system("CLS");
    
    //aqui le pedimos que imprima hasta que i sea la cantidad de la potencia de limite
    //antes lo tenia con una funcion que yo hice pero la libreria math tiene pow que es lo mismo
    for(i=0;i<pow(2,limite);i++){
    	cout<<"{";
        for(j=0;j<limite;j++){
       		//aqui pedimos que si i y J es mayor que 1 imprima el valor de la matriz
            if(i & (1<<j))
            cout<<A[j]<<"/";
        }
        cout<<"}";
        cout<<"--->";
        
    	//aqui hacemos lo mismo que el anterior ciclo
        for(j=0;j<limite;j++)
        {
        	//aqui en vez de imprimir el valor de la matriz, imprimimos un 1
        	if(i & (1<<j))
        	{
        		cout<<"1";
			}else
			//y en vez de no imprimir nada imprimimos un 0
			{
				cout<<"0";
			}
		}
		//aqui ya acaba el ciclo para cada "valor" por decir algo y ya saltamos de linea
		cout<<"\n";
    }
}
//le puse los mas comentarios que pude por si te ayuda a entenderle mejor, te amo mucho besitos <3
