//dante alejandro alegria romero
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
	int i,j,limite,cantidad,opc;
    int A[100];
    srand(time(NULL));
    cout<<"Ingrese el numero de elementos del conjunto"<<endl;
    cin>>limite;
    for(i=0;i<limite;i++){
       
       A[i]=((rand()/32767.1)*11);
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
