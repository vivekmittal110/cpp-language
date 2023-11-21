// find the sum of the given series : s = 1-2+3-4....n
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the last number of series : ";
    cin >> n;
    int sum = 0;
    for(int i = 1; i <= n; i++){
        if(i % 2 != 0){
            sum += i;
        }
        else{
            sum -= i;
        }
    }
    cout << sum;
    return 0;
}