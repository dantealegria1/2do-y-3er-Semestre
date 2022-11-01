#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
using namespace std;
    
size_t countOccurrences(char c, string &str)
{
    size_t count = 0;

    for (char i : str)
        if (i == c)
            count++;

    return count;
}
int main()
{

    		char ch1='0';
    string binarios[100][100];
    binarios[1][1]="1000011010";
    binarios[1][2]="0010101000";
    binarios[1][3]="1100010100";
    binarios[1][4]="1110101001";
    binarios[1][5]="1001100010";
    binarios[1][6]="1011100100";
    binarios[1][7]="1101101010";
    binarios[1][8]="1111101010";
    binarios[1][9]="1000101000";
    binarios[1][10]="0000000000";
    cout<<"cadenas iniciales"<<endl;
    for(int i=1;i<=10;i++)
    {
        cout<<i<<":"<<binarios[1][i]<<":";
        cout<<countOccurrences(ch1, binarios[1][i])<<endl;
    }
    cout<<"-------------------------"<<endl;
    cout<<"segunda generacion"<<endl;
    cout<<"-------------------------"<<endl;
    for(int i=1;i<11;i++)
    {
        binarios[2][i]=binarios[1][i].substr(0,4)+binarios[1][11-i].substr(4,9);
        cout<<i<<":"<<binarios[2][i]<<":";
        cout<<countOccurrences(ch1, binarios[2][i])<<endl;
    }
	cout<<"--------------------------"<<endl;
	cout<<"tercera generacion"<<endl;
	cout<<"--------------------------"<<endl;
	for(int i=1;i<11;i++)
	{
		
		if(countOccurrences(ch1, binarios[1][i])<countOccurrences(ch1, binarios[2][i]))
		{
			binarios[3][i]=binarios[2][i];
		}else{
			binarios[3][i]=binarios[1][i];
		}
		cout<<i<<":"<<binarios[3][i]<<":";
		cout<<countOccurrences(ch1, binarios[3][i])<<endl;
	}
	cout<<"-------------------------"<<endl;
    cout<<"cuarta generacion"<<endl;
    cout<<"-------------------------"<<endl;
    for(int i=1;i<11;i++)
    {
        binarios[4][i]=binarios[3][i].substr(0,4)+binarios[3][11-i].substr(4,9);
        cout<<i<<":"<<binarios[4][i]<<":";
        cout<<countOccurrences(ch1, binarios[4][i])<<endl;
    }
    	cout<<"--------------------------"<<endl;
	cout<<"quinta generacion"<<endl;
	cout<<"--------------------------"<<endl;
	for(int i=1;i<11;i++)
	{
		
		char ch1='0';
		if(countOccurrences(ch1, binarios[4][i])<countOccurrences(ch1, binarios[3][i]))
		{
			binarios[5][i]=binarios[3][i];
		}else{
			binarios[5][i]=binarios[4][i];
		}
		cout<<i<<":"<<binarios[5][i]<<":";
		cout<<countOccurrences(ch1, binarios[5][i])<<endl;
	}
}
