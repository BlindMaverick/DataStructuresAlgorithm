#include <bits/stdc++.h>
using namespace std;

int main()
{
    // char
    char c;
    cout << "Enter a character : ";
    cin >> c;
    cout << "Character: " << c << endl;

    // string
    string str;
    cout << "Enter a string: ";
    cin >> str;
    cout << "String: " << str << endl;

    // string with spaces
    string strWithSpaces;
    cout << "Enter a string with spaces: ";
    getline(cin, strWithSpaces);
    cout << "String with spaces: " << strWithSpaces << endl;
}