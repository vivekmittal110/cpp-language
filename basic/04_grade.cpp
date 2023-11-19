// wap to give grade according to percentage
#include <iostream>
using namespace std;
int main()
{
    int percentage;
    cout << "Enter your percentage : ";
    cin >> percentage;
    if (percentage > 100)
    {
        cout << "not a valid percentage";
    }
    else if (percentage > 90)
    {
        cout << "Grade - A" << endl;
    }
    else if (percentage > 70)
    {
        cout << "Grade - B" << endl;
    }
    else if (percentage > 40)
    {
        cout << "Grade - C" << endl;
    }
    else
    {
        cout << "Grade - D" << endl;
    }
    return 0;
}