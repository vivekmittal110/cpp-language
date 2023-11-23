// conversion of binary into decimal
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a binary number : ";
    cin >> num;
    int a = num;
    int dec = 0, n;
    n = a % 10;
    dec = dec + n;
    a /= 10;
    int pow = 1;
    for (int i = 1; a > 0; i++)
    {
        n = a % 10;
        pow = pow * 2;
        dec += n * pow;
        a /= 10;
    }
    cout << dec;
    return 0;
}