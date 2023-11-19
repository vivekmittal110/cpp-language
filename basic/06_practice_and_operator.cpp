// Wap to print a number when it is even and dividible by 3
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;
    if ((num % 2 == 0) && (num % 3 == 0))
    {
        cout << "number is divisible by 3 and it is even too" << endl;
    }
    else
    {
        cout << "number may not be even or divisible by 3";
    }
    return 0;
}