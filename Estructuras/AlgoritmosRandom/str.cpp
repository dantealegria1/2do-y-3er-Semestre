
// CPP program to illustrate substr()
#include <string.h>
#include <iostream>
using namespace std;
 
int main()
{
    // Take any string
    string s1[1]= "100010100101";
 
    // Copy two characters of s1 (starting
    // from position 3)
    string r = s1[1].substr(0, 4);
 
    // prints the result
    cout << "String is: " << r;
	 
    return 0;
}
