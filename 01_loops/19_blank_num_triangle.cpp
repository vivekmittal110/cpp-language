#include <iostream>
using namespace std;
int main(){
    int rows;
    cout << "Enter the number of rows : ";
    cin >> rows;
    int a = 1;
    for(int i = 1; i <= rows; i++){
        for(int k = rows -i; k >= 1; k--){
            cout << " ";
        }
        for(int j = 1; j <= i; j++){
            if(j == 1 || j == i){
                cout << a;
            }
            else{
                cout << " ";
            }
        }
        a++;
        cout << endl;
    }
    return 0;
}