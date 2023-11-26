// find the area and circumfrance of a circle
#include <iostream>
using namespace std;
float area(float ar){
    return 3.14 * ar * ar;
}
float circumfrance(float cir){
    return 2 * 3.14 * cir;
}
int main(){
    float radius;
    cout << "Enter radius : ";
    cin >> radius;
    cout << "area of circle : " << area(radius) << endl;
    cout << "circumfrance of circle : "<< circumfrance(radius) << endl;
    return 0;
}