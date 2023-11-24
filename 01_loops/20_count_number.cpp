// wap to count the number of a given digit number n
#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter a number : ";
    cin >> num;
    int a = num;
    int count = 0;
    for(int i = 1; a > 0; i++){
        a = a / 10;
        count++;
    }
    cout << count;
    return 0;
}