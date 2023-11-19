// Wap to divide people into 3 age group depending upon their age
#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter your age : ";
    cin >> age;
    if (age < 12)
    {
        cout << "You are child" << endl;
    }
    else if (age >= 12 && age <= 18)
    {
        cout << "you are a teenager" << endl;
    }
    else
    {
        cout << "you are adult" << endl;
    }
    return 0;
}