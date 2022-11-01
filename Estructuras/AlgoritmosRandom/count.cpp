#include <iostream>
#include <vector>
#include <string>

using std::cout; using std::cerr;
using std::endl; using std::string;

size_t countOccurrences(char c, string &str)
{
    size_t count = 0;

    for (char i : str)
        if (i == c)
            count++;

    return count;
}

int main() {
    char ch1 = 'e';
    char ch2 = 'h';
    string str1("hello there, how are you doing?");
    string str2("Hello there! How are you doing?");

    cout << "number of char - '" << ch1 << "' occurrences = " << countOccurrences(ch1, str1) << endl;
    cout << "number of char - '" << ch2 << "' occurrences = " << countOccurrences(ch2, str2) << endl;

    exit(EXIT_SUCCESS);
}
