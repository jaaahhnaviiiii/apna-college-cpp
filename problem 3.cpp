#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int i = 1;
    int sum = 0;
    while (i <= n)
    {
        i % 2 != 0 ? sum = sum + i : sum;
        i++;
    }
    cout << "The sum of odd numbers from 1 to " << n << " is: " << sum << '\n';
    return 0;
}