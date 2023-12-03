#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v= {1,2,3,4,5,6,7};
    int even = 0, odd = 0;
    for(int i = 0; i < v.size() ;i++){
        if(i % 2 == 0){
            even += v[i];
        }
        else{
            odd += v[i];
        }
    }
    cout << (even - odd);
    return 0;
}