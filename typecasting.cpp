#include <iostream>
using namespace std;
int main()
{
 char ch;
    cout << "Enter a letter: ";
    cin >> ch;
    if (ch >= 'a' && ch <= 'z')
    {
        cout << "Lowercase letter\n";
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        cout << "Uppercase letter\n";
    }
    else
    {
        cout << "Special character\n";
    }
    return 0;
}