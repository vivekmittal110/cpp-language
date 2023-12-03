#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v = {1,2,3,1,5,6,2,1};
    int x = 1, ele = -1;
    // for(int i = 0; i < v.size(); i++){
    //     if(v[i] == x){
    //         ele = i;
    //     }
    // }
    for(int i = v.size()-1; i >= 0; i--){
        if(v[i] == x){
            ele = i;
            break;
        }
    }
    cout << ele;
    return 0;
}