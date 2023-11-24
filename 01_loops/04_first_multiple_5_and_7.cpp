// print the first multiple of 5 which is also multiple of 7
#include <iostream>
using namespace std;
int main()
{
    for (int i = 1;; i++)
    {
        int a = 5;
        a *= i;
        if (a % 7 == 0)
        {
            cout << a;
            break;
        }
    }
    // another method
    int i = 5;
    while (true)
    {
        if (i % 7 == 0)
        {
            cout << i;
            break;
        }
        i += 5;
    }
    // another
    for (int i = 5;; i += 5)
    {
        if (i % 7 == 0)
        {
            cout << i;
            break;
        }
    }
    return 0;
}