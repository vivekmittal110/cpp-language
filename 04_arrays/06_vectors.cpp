// basically vectors are the dhynamic arrays
// in which we can resize the size of array
// for using vector we have to include hadder file <vector>
#include <iostream>
#include <vector>
using namespace std;
int main(){
    // decleration of vectors
    vector <int> num;
    // or 
    vector <int> num2(2);
    // cout << sizeof(num2);    not applicable

    vector <int> num3 = {1,2,3,4};
    cout << num3.size();     // for checking size
    num2.resize(8);          // for resize vector lenght

    // add element in vector
    num3.push_back(5);

    cout << endl << num3[4] << endl;

    // num3.begin(3);
    num3.end();

    
    return 0;
}