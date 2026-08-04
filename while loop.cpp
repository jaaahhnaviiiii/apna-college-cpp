/*while(condition){
do something
}*/

#include <iostream>
using namespace std;
int main()
{
    int count = 1;
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Numbers from 1 to n are:\n";
    while (count <= n)
    {
        cout << count << '\n';
        count++; // comment this out to pro=int infinite loop. DO NOT TRY. sab band ho jayega and storage full ho jayega.
    }
    return 0;
}

/*VARIABLE NAME CONVENTION:
camelCase
FOR LOOPS:
take variable as i*/