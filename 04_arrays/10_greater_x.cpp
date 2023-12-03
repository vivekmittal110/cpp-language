#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v = {1,3,2,4,2,5,7};
    int occur = 0, x = 2;
    for(int ele : v){
        if(ele > x){
            occur++;
        }
    }
    cout << occur;

    return 0;
}