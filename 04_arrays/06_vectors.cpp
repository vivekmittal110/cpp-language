// basically vectors are the dhynamic arrays
// in which we can resize the size of array
// for using vector we have to include hadder file <vector>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // decleration of vectors
    vector<int> num;
    // or
    vector<int> num2(2);
    // cout << sizeof(num2);    not applicable

    vector<int> num3 = {1, 2, 3, 4};
    cout << num3.size(); // for checking size
    num2.resize(8);      // for resize vector lenght

    // add element in vector
    num3.push_back(5);

    cout << endl
         << num3[4] << endl;

    num3.begin();
    num3.end();

    num3.insert(num3.begin() + 2, 12);
    cout << num3[2] << endl;

    // delete element in vector
    num3.pop_back();
    num3.erase(num3.begin() + 2);
    cout << num3[2] << endl;
    cout << num3.size() << endl;

    num3.clear();
    cout << num3[2] << endl;

    cout << num3.size() << endl;
    cout << num3.capacity() << endl;
    num3.push_back(10);
    cout << num3.size() << endl;
    cout << num3.capacity() << endl;


    vector <int> neww;
    cout << neww.size() << endl;
    cout << neww.capacity() << endl;

    neww.push_back(1);
    cout << neww.size() << endl;
    cout << neww.capacity() << endl;

    neww.push_back(3);
    cout << neww.size() << endl;
    cout << neww.capacity() << endl;

    neww.push_back(5);
    cout << neww.size() << endl;
    cout << neww.capacity() << endl;
    
    neww.push_back(7);
    cout << neww.size() << endl;
    cout << neww.capacity() << endl;

    neww.resize(17);
    cout << neww.size() << endl;
    cout << neww.capacity() << endl;
    neww.push_back(1);
    cout << neww.size() << endl;
    cout << neww.capacity() << endl;



    return 0;
}