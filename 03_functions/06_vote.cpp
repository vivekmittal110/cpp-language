#include <iostream>
using namespace std;
void vote(int age);
int main(){
    int age;
    cout << "Enter age : ";
    cin >> age;
    vote(age);
    return 0;
}
void vote(int age){
    if(age >= 18){
        cout << "yes you can vote";
    }
    else{
        cout << "you cannot vote";
    }
}