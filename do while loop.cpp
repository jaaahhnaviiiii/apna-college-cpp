/* do{

} while(condition);   //kaam pehle, check condtion later. thus, runs atleast once even if condition is false.
        VS
while (condition){    //check condition first, if true then do something. thus, runs only if condition is true.
do something;
}
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int i = 1;
    cout << "Numbers from 1 to n are: \n";
    do
    {
        cout << i << '\n';
        i++;
    } while (i <= n);
    return 0;
}