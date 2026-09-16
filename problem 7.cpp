// Factorial of n

#include <iostream>
using namespace std;

int main()
{
    int n, factorial = 1;

    cout << "Enter the value of n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }

    cout << "The factorial is: " << factorial << '\n';

    return 0;
}