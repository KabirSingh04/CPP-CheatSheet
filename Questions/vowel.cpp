// C++ Program to Check Whether a character is Vowel or Consonant.
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    char a;
    cout << "Enter a character : \n";
    cin >> a;
    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U')
    {
        cout << "Vowel";
    }
    else
    {
        cout << "Consonant";
    }
    return 0;
}
