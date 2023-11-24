//wap to print + pattern
#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter number of lines : ";
    cin >> num;
    for(int i = 1; i <= num; i++){
        if(i == ((num/2)+1)){
            for(int j = 1; j <= num; j++){
                cout << "*";
            }
        }
        else{
            for(int k = 1; k <= num; k++){
                if(k == ((num/2)+1)){
                    cout << "*";
                }
                else{
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}