// print alphabet diamond
#include <iostream>
using namespace std;
int main()
{
    int alpha;
    cout << "Enter row : ";
    cin >> alpha;
    int a = alpha;
    int b = alpha;
    for (char i = 1; i <= alpha; i++)
    {
        for (int s = (a - 1); s > 0; s--)
        {
            cout << " ";
        }
        for (int j = 1; j <= ((2 * i) - 1); j++)
        {
            cout << char(j + 64);
        }
        a--;
        cout << endl;
    }
    for (int i = 1; i <= alpha - 1; i++)
    {
        int al = 65;
        for (int s = 1; s <= i; s++)
        {
            cout << " ";
        }
        for (int k = (2 * b) - 3; k > 0; k--)
        {
            cout << char(al);
            al++;
        }
        cout << endl;
        b--;
    }
    return 0;
}
