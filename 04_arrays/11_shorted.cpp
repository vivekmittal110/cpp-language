#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v = {1,3,9,9,10,19};
    bool shot = true;
    for(int i = 1; i < v.size(); i++){
        if(v[i] < v[i-1]){  
            shot = false;
            }
    }
    cout << shot;
    return 0;
}