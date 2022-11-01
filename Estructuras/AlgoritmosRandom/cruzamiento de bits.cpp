#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
    
    void cruzar(string binarios[])
    {
    int posicion=4;
    string aux[10];
    for(int i=1;i<=10;i++)
    {
        aux[i]=binarios[i].substr(0,posicion)+binarios[10-i].substr(posicion,binarios[i].length());
        cout<<aux[i]<<endl;
    }
    }
int main()
{

    
    string binarios[10];
    binarios[1]="1000101010";
    binarios[2]="1010101010";
    binarios[3]="1100101010";
    binarios[4]="1110101010";
    binarios[5]="1001101010";
    binarios[6]="1011101010";
    binarios[7]="1101101010";
    binarios[8]="1111101010";
    binarios[9]="1000111010";
    binarios[10]="1010111010";
    
    //en que posicion partimos el vector
 
    cout<<"cadenas iniciales"<<endl;
    for(int i=1;i<=10;i++)
    {
        cout<<binarios[i]<<endl;
    }
    cout<<"cadenas cruzadas"<<endl;
    cruzar(binarios);
}