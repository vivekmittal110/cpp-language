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
    int pow = 1;
    for (int i = 1; a > 0; i++)
    {
        n = a % 10;
        dec += (n * pow);
        pow = pow * 2;
        a /= 10;
    }

    // another method

    // int pow = 1;
    // int dec = 0;
    // while(num>0){
    //     int last_digit = num%10;
    //     dec += last_digit * pow;
    //     pow *= 2;
    //     num /= 10;
    // }
    cout << dec;
    return 0;
}