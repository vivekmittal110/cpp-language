#include <iostream>
using namespace std;
int main(){
    int arr[] = {3,2,0,1,4,6};
    int count = 0, target = 5; 
    for(int i = 0; i < 5; i++){
        for(int j = i+1; j < 5; j++){
            for(int k = j+1; k < 5; k++){
                if(arr[i]+arr[j]+arr[k] == target){
                    cout << arr[i] << "," << arr[j] << "," << arr[k] <<endl;
                    count++;
                }
            }
        }
    }
    cout << count;
    return 0;
}