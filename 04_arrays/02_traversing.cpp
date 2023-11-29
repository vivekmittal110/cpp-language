#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    int size = (sizeof(arr)/sizeof(arr[0]));
    // for loop
    for(int i = 0; i < size; i++){
        cout << arr[i] << endl;
    }

    // for each loop
    for( int ele : arr){
        cout << ele << endl;
    }

    // while loop
    int indx = 0;
    while(indx < size){
        cout << arr[indx] << endl;
        indx++;
    }

    // taking input in arrays
    char vowels[5];
    // for(int i = 0; i < 5; i++){
    //     cin >> vowels[i];
    // }
    // for(int i : vowels){
    //     cin >> vowels[3];    // not working
    // }
    // for(char ele : vowels){
    //     cin >> ele;          // not working
    // }
    for(char& ele : vowels){   // using & ampercent operator its working
        cin >> ele;
    }
    for(char i : vowels){
        cout << i << endl;
    }
    return 0;
}