// print the number from 1 to 50, skip multiple of 3
#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    while(i <= 50)
    {
        if (i % 3 == 0)
        {
            i++;
            continue;
        }
        cout << i << endl;
        i++;
    }
    //another
    for(int i = 1; i <= 50; i++){
        if(i % 3 == 0){
            continue;
        }
        cout << i << endl;
    }
    return 0;
}