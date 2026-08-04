// SUM OF NUMBERS FROM 1 TO n

#include <iostream>
using namespace std;
int main()
{
    int n;
    int sum = 0;
    cout << "Enter a number:";
    cin >> n;
    for (int i = 1; i <= n; i = i + 1) // i = i + 1 means i++
    {
        sum += i;
    }
    cout << "Sum of numbers from 1 to " << n << " is: " << sum << '\n';
    return 0;
}