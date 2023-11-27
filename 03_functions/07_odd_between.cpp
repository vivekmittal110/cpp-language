// print the odd numbers between given two numbers
#include <iostream>
using namespace std;
void is_odd(int x, int y);
void is_odd(int x, int y){
    for(int i = x; i <= y; i++){
        if(i % 2 != 0){
            cout << i << " ";
        }
    }
}
int main(){
    int a,b;
    cout << "Enter a : ";
    cin >> a;
    cout << "Enter b : ";
    cin >> b;
    is_odd(a,b);
    return 0;
}