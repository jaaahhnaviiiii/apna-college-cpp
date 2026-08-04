/*CHECK WHETHER LOWERCASE OR UPPERCASE CHARACTER*/
#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if (ch >= 'a' && ch <= 'z') // implicit type conversion from char to int
    {
        cout << "Character is lowercase.\n"
             << "ASCII value of " << ch << " is " << int(ch) << '\n';
    }
    else
    {
        cout << "Character is uppercase.\n"
             << "ASCII value of " << ch << " is " << int(ch) << '\n';
    }
    return 0;
}