// calculate the sum of every element in a given array
#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    int sum = 0;
    for(int ele : arr){
        sum += ele;
    }
    cout << sum;
    return 0;
}