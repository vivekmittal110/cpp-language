#include <iostream>
using namespace std;
int main()
{
    int rows;
    cout << "Enter a number of rows : ";
    cin >> rows;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << k;
        }
        // for (int l = 1; l <= i - 1; l++)
        // {
        //     cout << i-l;
        // }
        for(int m = i - 1; m >= 1; m--){
            cout << m;
        }
        cout << "\n";
        // use any of above method for reverse printing
    }
    return 0;
}
