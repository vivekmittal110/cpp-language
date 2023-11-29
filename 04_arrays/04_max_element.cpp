// find the maximum element from the given element
#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,2,4,2,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    int max = arr[0];
    for(int i = 1; i < size; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    cout << max;
    return 0;
}