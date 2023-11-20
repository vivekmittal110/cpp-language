#include <iostream>
using namespace std;
int main()
{
    int rows, cols;
    cout << "Enter a number of rows : ";
    cin >> rows;
    cout << "Enter a number of columns : ";
    cin >> cols;
    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= cols; j++){
            if(((i+j) % 2 == 0)){
                cout << "1";
            }
            else{
                cout << "2";
            }
        }
        cout << "\n";
    }
    return 0;
}