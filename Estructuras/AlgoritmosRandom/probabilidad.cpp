//dante alejandro alegria romero
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int i,j,limite,cantidad,opc;
	float aux=0;
	float division2;
	float limite2;
    string A[100];
    cout<<"Ingrese el numero de elementos del conjunto"<<endl;
    cin>>limite;
    for(i=0;i<limite;i++){
       cout<<"Ingrese el elemento: "<<i+1<<"/"<<limite<<" ";
       cin>>A[i];
    }   
    system("CLS");
    cout<<"Subconjunto-Cardinalidad-Probabilidad"<<endl;
    for(i=0;i<pow(2,limite);i++)
	{
    	cout<<"{";
        for(j=0;j<limite;j++)
		{
            if(i & (1<<j))
            {
            cout<<A[j]<<"/";
            aux=aux+1;
        	}
        }
        cout<<"}";
        cout<<"--->";
        limite2=limite;
		division2=aux/limite2;
		cout<<aux<<"--->"<<division2;
		aux=0;
		cout<<"\n";
    }
}
