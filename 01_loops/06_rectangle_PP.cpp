// here PP refers pattern printing
// print rectangle
#include <iostream>
using namespace std;
int main(){
    int row,col;
    cout << "Enter a number of rows : ";
    cin >> row;
    cout << "Enter a number of columns : ";
    cin >> col;
    for(int i = 1; i <= row; i++){
        for(int j = 1; j <= col; j++){
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}