// Wap to check whether number is odd or even
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;
    cout << endl;
    if (num % 2 == 0)
    {
        cout << "number is even" << endl;
    }
    else
    {
        cout << "number is odd";
    }
    return 0;
}