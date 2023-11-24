#include <iostream>
using namespace std;
int main()
{
    int rows;
    cout << "Enter a number of rows : ";
    cin >> rows;
    int sp = rows - 1;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= sp; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= ((i * 2) - 1); k++)
        {
            cout << "*";
        }
        cout << "\n";
        sp--;
    }
    return 0;
}