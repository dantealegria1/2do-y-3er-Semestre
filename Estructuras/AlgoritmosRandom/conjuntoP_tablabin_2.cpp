//dante alejandro alegria romero
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int i,j,limite,cantidad,opc;
    string A[100];
    cout<<"Ingrese el numero de elementos del conjunto"<<endl;
    cin>>limite;
    for(i=0;i<limite;i++){
       cout<<"Ingrese el elemento: "<<i+1<<"/"<<limite<<" ";
       cin>>A[i];
    }   
    system("CLS");
    for(i=0;i<pow(2,limite);i++){
    	cout<<"{";
        for(j=0;j<limite;j++){
            if(i & (1<<j))
            cout<<A[j]<<"/";
        }
        cout<<"}";
        cout<<"--->";
        for(j=0;j<limite;j++)
        {
        	if(i & (1<<j))
        	{
        		cout<<"1";
			}else
			{
				cout<<"0";
			}
		}
		cout<<"\n";
    }
}
