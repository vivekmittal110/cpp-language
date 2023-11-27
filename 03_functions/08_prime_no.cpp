// print prime numbers between given numbers
#include <iostream>
#include <cmath>
using namespace std;
bool is_prime(int x);
bool is_prime2(int num);
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
        }
    }
    return true;
}
bool is_prime2(int num){
    if(num <= 1){
        return false;
    }
    for(int i = 2; i < sqrt(num); i++){
        if(num % i == 0){
            return false;
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
        // if (is_prime(i))
        if(is_prime2(i))
        {
            cout << i << " ";
        }
    }
}