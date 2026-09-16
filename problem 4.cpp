//CHECK WHETHER PRIME OR NOT


#include <iostream>
using namespace std;

int main()
{
    int i, num;
    bool prime = true;

    cout << "Enter a number: ";
    cin >> num;

    for (i = 2; i <= num - 1; i++)
    {
        if (num % i == 0)
        {
            prime = false;
            break;
        }
    }

    if (prime)
    {
        cout << "The number is prime.";
    }
    else
    {
        cout << "The number is not prime.";
    }

    return 0;
}