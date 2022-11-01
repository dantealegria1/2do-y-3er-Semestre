//probabilidad de la interseccion de tres elementos
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float n;
    cout<<"ingrese la probabilidad del elemento 1"<<endl;
    cin>>n;
    float m;
    cout<<"ingrese la probabilidad del elemento 2"<<endl;
    cin>>m;
    float o;
    cout<<"ingrese la probabilidad del elemento 3"<<endl;
    cin>>o;
    float p;
    p=n*m*o;
    cout<<"la probabilidad de la interseccion de los tres elementos es "<<p<<endl;
    float p2;
    p2=n+m+o;
    cout<<"la probabilidad de la union de los 3 elementos es "<<p2<<endl;
}
