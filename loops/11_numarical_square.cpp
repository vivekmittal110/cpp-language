#include <iostream>
using namespace std;
int main(){
    int rows;
    cout << "Enter a number of rows : ";
    cin >> rows;
    int a = 1;
    for(int i = 1; i <= rows; i ++){
        for(int j = a; j <= rows; j++){
            cout << j;
        }
        a++;
        for(int k = 1; k <= i-1; k++){
            cout << k;
        }
        cout << "\n";
    }
    return 0;
}