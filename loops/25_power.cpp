// find a raise to power b
#include <iostream>
using namespace std;
int main(){
    int a;
    cout << "Enter number : ";
    cin >> a;
    int b;
    cout << "Enter power : ";
    cin >> b;
    int pow = 1;
    for(int i = 1; i <= b; i++){
        pow *= a;
    }
    cout << pow;
    return 0;
}