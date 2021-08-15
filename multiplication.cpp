// C++ Program to Generate Multiplication Table
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    /* code */
    int n;
    cout << "Enter a number : ";
    cin >> n;
    int mult;
    for (int i = 1; i <= 10; i++)
    {
        mult = n * i;
        cout << n << " x " << i << " = " << mult << endl;
    }
    return 0;
}
