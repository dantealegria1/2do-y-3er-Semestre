// librerías
#include <iostream.>
#include <math.h>
#include <locale.h>
#include <vector>

using namespace std;
vector< vector <int> > vec;


int digitos(int,int,int);
void radix(int [],int,int);
void print(int [],int);

int main(){
	setlocale(LC_ALL,"");
	int may=-1;
	int T;
	do{
		cout<<"Ingrese el número de elementos: "<<endl;
		cin>>T;
		if(T<=0){
			cout<<"Por favor ingrese una cantidad válida..."<<endl;
			system("pause");
			system("cls");
			fflush(stdin);
		}	
	}while(T<0);
	int vector[T];
	for(int i=0;i<T;i++){
		cout<<"Ingrese el número en la posición ["<<i+1<<"]"<<endl;
		cin>>vector[i];
		if(digitos(vector[i],1,10)>may){
			may=digitos(vector[i],1,10);
		}
	}
	system("cls");
	system("color F0");
	cout<<"--- Arreglo original ---"<<endl<<endl;
	for(int i=0;i<T;i++){
		cout<<"["<<vector[i]<<"] \t";
	}
	cout<<endl<<endl;
	radix(vector,T,may);
}
int digitos(int n,int i,int d){
	int cociente;
	cociente=n/d;
	if(cociente!=0){
		cociente *=d;
		digitos(cociente,i+1,d*10);
	}
	else{
		return i;
	}
}
void radix(int a[],int t,int may){
	vec.resize(10);
	int digito; 
	int m=0; 
	for(int i=0;i<may;i++){
		for(int j=0;j<t;j++){
			digito= (int)(a[j]/pow(10,i))%10;
			vec[digito].push_back(a[j]);
		}
		for(int k=0;k<10;k++){
			for(int l=0;l<vec[k].size();l++){
				a[m]=vec[k][l];
				m++;
			}
			vec[k].clear();
			
		}
		m=0;
	}
	print(a,t);
}
void print(int a[],int t){
	cout<<"--- Arreglo ordenado ---"<<endl<<endl;
	for(int i=0;i<t;i++){
		cout<<"["<<a[i]<<"] \t";
	}
}
