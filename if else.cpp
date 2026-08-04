#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout << "Enter marks: ";
    cin >> marks;
    if (marks >= 90 && marks < 100)
    {
        cout << "Your grade is A" << '\n';
    }
    else if (marks >= 80 && marks < 90)
    {
        cout << "Your grade is B" << '\n';
    }
    else if (marks >= 70 && marks < 80)
    {
        cout << "Your grade is C" << '\n';
    }
    else if (marks >= 60 && marks < 70)
    {
        cout << "Your grade is D" << '\n';
    }
    else if (marks >= 0 && marks < 60)
    {
        cout << "Your grade is F" << '\n';
    }
    else
    {
        cout << "You cannot vote." << '\n';
    }
    return 0;
}
