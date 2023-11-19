// wap to sum first natural number, where n is input
#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Enter a number : ";
    cin >> n;
    int a = n;
    while (a > 0)
    {
        sum += a;
        a--;
    }
    cout << sum << " is the sum of first natural number until " << n << endl;
    //another
    int s2 = 0;
    int i = 1;
    do{
        s2 += i; 
        i++;       
    }while(i <= n);
    cout<< s2;
    return 0;
}