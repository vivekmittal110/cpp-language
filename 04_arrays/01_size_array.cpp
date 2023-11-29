// find the size of array
#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    cout << sizeof(arr) << endl; // 5 element * 4 byte of integer

    // lenght of array
    cout << ( sizeof(arr) / sizeof(arr[0])) << endl;

    // garbage value
    int arr2[4];
    cout << arr2[0] << endl;
    cout << arr2[1] << endl;
    cout << arr2[2] << endl;
    cout << arr2[3] << endl;
    return 0;
}