// Sum from 1 to n which are divisible by 3

#include <iostream>
using namespace std;

int main()
{
    int n, i, sum{0};
    cout << "Enter the value of n: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        if (i % 3 == 0)
        {
            sum = sum + i;
        }
    }
    cout << "Sum is: " << sum;
    return 0;
}