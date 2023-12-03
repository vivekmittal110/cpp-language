#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v(5);

    // for(int i = 0; i < v.size(); i++){
    //     cin >> v[i];
    // }
    for(int &ele : v){
        cin >> ele;
    }
    for(int n : v){
        cout << n << " ";
    }
    return 0;
}