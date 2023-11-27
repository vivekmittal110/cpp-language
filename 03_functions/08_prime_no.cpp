// print prime numbers between given numbers
#include <iostream>
using namespace std;
bool is_prime(int x);
bool is_prime(int x)
{
    if (x <= 1)
    {
        return false;
    }
    for (int j = 2; j < x; j++)
    {
        if (x % j == 0)
        {
            return false;
            break;
        }
    }
    return true;
}
int main()
{
    int a, b;
    cout << "Enter first number : ";
    cin >> a;
    cout << "Enter Second number : ";
    cin >> b;

    for (int i = a; i <= b; i++)
    {
        if (is_prime(i))
        {
            cout << i << " ";
        }
    }
}