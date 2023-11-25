// Actual and formal parameters
#include <iostream>
using namespace std;
void add(int param1, int param2) // formal paramerter
{
}
// example pass by value
void change(int z)
{
    z = 100;
}
//example pass by reference
void change2(int &z){
    z = 100;
}
int main()
{
    int a = 1, b = 3;
    add(a, b); // actual parameter

    // pass by value - parameter values are copied to another variable
    int c = 10;
    change(c);
    cout << c << endl;

    // pass by reference - parameter values are passed itself by & ampersand operator
    int p = 5;
    int &q = p;
    cout << q<<endl;

    int d = 12;
    change2(d);
    cout<<d<<endl;
    return 0;
}