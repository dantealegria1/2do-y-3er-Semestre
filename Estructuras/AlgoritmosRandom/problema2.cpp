/*
Una frase es palíndromo si, después de convertir todas sus letras mayúsculas en
minúsculas y removiendo todos los caracteres no alphanumericos, puede ser leído de la
misma manera de izquierda a derecha como de derecha a izquierda. Los caracteres
alphanumericos incluye letras y números.
*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string minuscula(string cadena) {
  for (int i = 0; i < cadena.length(); i++) cadena[i] = tolower(cadena[i]);
  return cadena;
}
string removeAll(const string& s) {
    string tmp(s);
    tmp.erase(remove(tmp.begin(), tmp.end(), ' '), tmp.end());
    tmp.erase(remove(tmp.begin(), tmp.end(), ','),tmp.end());
    tmp.erase(remove(tmp.begin(), tmp.end(), '.'),tmp.end());
    tmp.erase(remove(tmp.begin(), tmp.end(), ':'),tmp.end());
    tmp.erase(remove(tmp.begin(), tmp.end(), ';'),tmp.end());
    tmp.erase(remove(tmp.begin(), tmp.end(), '"'),tmp.end());
    tmp.erase(remove(tmp.begin(), tmp.end(), '_'),tmp.end());
    return tmp;
}
int main()
{
	string x;
	cout<<"dame la string que desea invertir"<<endl;
	cin>>x;
	cout<<"palabra: "<<x<<endl;
	x=removeAll(x);
	string xM=minuscula(x);
	string x2 (xM.rbegin(), xM.rend());
	cout<<"palabra invertida: "<<x2<<endl;
	if(xM==x2)
	{
		cout<<"Es palindroma"<<endl;
	}else
	{
		cout<<"no es palindroma"<<endl;
	}
}
