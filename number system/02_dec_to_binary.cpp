// convert decimal number into binary number 
#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter a number : ";
    cin >> num;
    int ans = 0;
    while(num > 0){
        ans = num % 2;
        num /= 2;
        cout << ans;
    }
    return 0;
}