// reverse the digits of a number
#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter a number : ";
    cin >> num;
    int a = num, rev = 0;
    while(a > 0){
        rev = rev * 10;
        rev += a % 10;
        a /= 10;
    }
    cout << rev;
    return 0;
}