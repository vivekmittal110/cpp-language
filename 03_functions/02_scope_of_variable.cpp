// scope of variable in c++
#include <iostream>
using namespace std;
int apple = 5; // global variable - which we can use throughout the whole program
int main(){

    // local veriable - which exist only within the same function
    int a;
    for(int i = 1; i < 0 ; i++){} // i can be accessable with in loop
    // int p = 5;
    float p = 5.5;// beacause of the same name within same function it will throw an error
    cout << p << endl;

    
    // here apple is local and global both so in this example 7 will be printed because local >> global
    int apple =7; // now apple can be accessible within curly brackets of main
    cout << apple << endl;
    cout << ::apple << endl; //  using scope resolution operator :: to access global variable into main function
    return 0;
}