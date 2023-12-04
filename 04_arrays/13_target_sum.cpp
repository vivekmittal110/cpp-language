#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,6,3,4,7};
    int target = 7;
    int count = 0;
    for (int i = 0; i < 5; i++)
    {
        for(int j = i+1; j < 5; j++){
            if(arr[i]+arr[j] == target){
                cout << "{" << arr[i] << "," << arr[j] << "}" << endl;
                count++;
            }
        }
    }
    cout << count;
    
    return 0;
}