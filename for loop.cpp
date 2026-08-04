/*for(initialization; condition; updation){
do something
}*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Numbers from 1 to n are:\n";
    for (int i = 1; i <= n; i++)
    {
        cout << i << '\n';
        if (i % 10 == 0 && i > 9)
        {
            cout << "Breaking the loop as number is a multiple of 10.\n";
            break; // keyword}
        }
    }
    return 0;
}