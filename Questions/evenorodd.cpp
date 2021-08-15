// C++ Program to Check Whether Number is Even or Odd
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a;
    cout << "Enter the number to be checked : \n";
    cin >> a;
    if (a % 2 == 0)
    {
        cout << "Even";
    }
    else
    {
        cout << "Odd";
    }
    return 0;
}
