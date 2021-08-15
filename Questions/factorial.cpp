#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a;
    cout << "Enter a number : ";
    cin >> a;
    int fact = 1;
    for (int i = 1; i <= a; i++)
    {
        fact *= i;
    }
    cout << "Factorial of " << a << " is " << fact;
    return 0;
}
