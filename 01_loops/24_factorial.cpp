// find the factorial of given number
#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter a number : ";
    cin >> num;
    int fact = 1;
    for(int i = 1; num > 1; i++){
        fact *= (num);
        num--;
    }
    // another method
    // for(int i = 1; i <= num; i++){
    //     fact *= i;
    // }
    cout << fact;
    return 0;
}