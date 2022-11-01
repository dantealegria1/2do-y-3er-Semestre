//dante alejandro alegria romero
#include <iostream>
#include <math.h>
using namespace std;
//funcion para convertir de decimal a binario
int bin(int numero)
{
	int vec[numero];
	int x=0;
	int aux;
	while(numero!=0)
	{
	
		vec[x]=numero%2;
		x++;
		numero/=2;
	
	}
	for(int n=x-1;n>=0;n--)
	{
		cout<<vec[n];
	}
		cout<<" "<<endl;
}
int main()
{
	int opc;
	int n;
	while(opc!=3)
	{
	cout<<"MENU"<<endl;
	cout<<"1. deciamal a binario"<<endl;
	cout<<"2. tabla hasta un  numero"<<endl;
	cout<<"4. Conjunto Potenciaa"<<endl;
	cout<<"5. Tabla de números binarios en base a los elementos de un conjunto"<<endl;
	cout<<"6. salir"<<endl;
	cin>>opc;
	if(opc==6)
	{
		cout<<"Saliendo"<<endl;
		return 0;
		system("PAUSE");
	}
	if(opc==1)
	{
		cout<<"Dame el numero que deseas convertir"<<endl;
		cin>>n;
		cout<<n<<" en binario es igual a: ";
		bin(n);
		system("PAUSE");
	}
	if(opc==2)
	{
		cout<<"Dame hasta que numero desea generar la tabla"<<endl;
		cin>>n;
		for(int a=0; a<n+1;a++)
		{
			cout<<a<<": ";
			bin(a);
		}
		system("PAUSE");
	}
	//por alguna razon al terminar de ejecutar la tercera opcion se cierra el programa
	if(opc==5)
	{
	int i,j,limite,cantidad;
    string A[100];
    cout<<"Ingrese el numero de elementos del conjunto"<<endl;
    cin>>limite;
    for(i=0;i<limite;i++){
       cout<<"Ingrese el elemento: "<<i+1<<" ";
       cin>>A[i];
    }
    for(i=0;i<pow(2,limite);i++){
        for(j=0;j<limite;j++){
          if(i & (1<<j))
            cout<<A[j];
        }
        cout<<"\n";
    }
    system("PAUSE");
	}
	if(opc==4)
	{
		int p,p2;
		cout<<"Cuantos numeros tiene el conjunto"<<endl;
		cin>>p;
		p2=pow(2,p)-1;
		cout<<"el conjunto potencia es: "<<p2<<endl;
		cout<<"En binario es igual a: "<<bin(p2)<<endl;
	system("PAUSE");
	}
	system("CLS");
	}
}
