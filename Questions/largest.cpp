// C++ Program to Find Largest Number Among Three Numbers
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a, b, c;
    cout << "Enter three numbers : ";
    cin >> a;
    cin >> b;
    cin >> c;
    if (a > b & a > c)
    {

        cout << a << " is the greatest.";
    }
    else if (b > a & b > c)
    {
        cout << b << " is greatest.";
    }
    else
    {
        cout << c << " is greatest.";
    }
    return 0;
}
