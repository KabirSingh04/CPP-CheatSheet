// C++ Program to Calculate Sum of Natural Numbers
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    /* code */
    int n;
    cout << "Enter the number : ";
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; ++i)
    {
        sum = sum + i;
    }
    cout << "The sum of " << n << " natural numbers is : " << sum;
    return 0;
}
