#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){

    string x;
	cout<<"dame lo string que desea invertir"<<endl;
	cin>>x;
		if(x.at(0)!='0'||x.at(0)!='-')
	{
    	string x2 (x.rbegin(), x.rend());
    	cout<<x2<<endl;
	}
		if(x.at(0)=='-')
    	{
    	x.erase(0,1);
    	string x2 (x.rbegin(), x.rend());
    	cout<<"-"<<x2<<endl;
		}else
		{
		if((x.at(0)=='0'))
		{
    	x.erase(0,1);
    	string x2 (x.rbegin(), x.rend());
    	cout<<x2<<endl;
		}
	}
	return 0;
}
