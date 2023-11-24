// find the sum of the digits in a given number
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;
    int sum = 0, a = num;
    for (int i = 1; a > 0; i++)
    {
        sum += (a % 10);
        a /= 10;
    }
    cout << sum;
    return 0;
}