#include <iostream>
using namespace std;
int main(){
    int hight, wide;
    cout << "Enter hight : ";
    cin >> hight;
    cout << "Enter wide : ";
    cin >> wide;
    for(int i = 1; i <= hight; i++){
        for(int j = 1; j <= wide; j++){
            if((i+j) % 2 == 0){
                cout << "*";
            }
            else{
                cout << ".";
            }
        }
        cout << endl;
    } 
    return 0;
}