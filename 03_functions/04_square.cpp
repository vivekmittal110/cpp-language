// print squares of first five natural numbers
#include <iostream>
#include <cmath>
using namespace std;
int square(int i){
    // int a = pow(i,2);
    // return a;
    return i*i;
}
int main(){
    for(int i = 1; i <= 5; i++){
        cout << square(i) << " ";
    }
    return 0;
}