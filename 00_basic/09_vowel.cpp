// wap to check given alphabet is vowel or consonants
#include <iostream>
using namespace std;
int main()
{
    char alp;
    cout << "Enter a character : ";
    cin >> alp;

    switch (alp)
    {
    case 'a':
        cout << "Vowel";
        break;
    case 'e':
        cout << "Vowel";
        break;
    case 'o':
        cout << "Vowel";
        break;
    case 'i':
        cout << "Vowel";
        break;
    case 'u':
        cout << "Vowel";
        break;
    default:
        cout << "consonant";
        break;
    }
}