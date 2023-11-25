// add function
#include <iostream>
using namespace std;
int add(int a, int b); // function prototype (now i can where ever define the function it works ie. bottom of main)
int add(int a, int b, int c){
    int sum = a+b+c;
    return sum;
}
float add(float a, float b){
    float sum = a + b;
    return sum;
}
int main(){
    int a = 4;
    int b = 5.4;
    // int c = 6;
    cout << add(a,b);
    return 0;
}
int add(int a, int b){
    int sum = a+b;
    return sum;
}
