#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v = {1,2,3,1,3,1,4,6,1};
    int x = 1, occur = 0;
    for(int ele : v){
        if(ele == x){
            occur++;
        }
    }
    cout << occur;
    return 0;
}