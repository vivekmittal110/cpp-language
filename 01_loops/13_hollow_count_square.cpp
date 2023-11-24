#include <iostream>
using namespace std;
int main()
{
    int rows;
    cout << "Enter a number of rows : ";
    cin >> rows;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= 6; j++)
        {
            if (i == 1 || i == rows || j == 1 || j == 6)
            {
                cout << j;
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}