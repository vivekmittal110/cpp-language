#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,4,7,4,67,9,4};
    int key = 67;
    int ans = -1;
    // for(int ele : arr){         // for print element or something you want
    //     if(key == ele){
    //         ans = ele;
    //         break;
    //     }
    // }
    for(int i = 0; i < 7; i++){     // for print the index
        if(key == arr[i]){
            ans = i;
            break;
        }
    }
    cout << ans;
    return 0;
}