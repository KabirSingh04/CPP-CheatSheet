//C++ Program to Find Quotient and Remainder
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int quo, rem;
    int a = 20;
    int b = 10;
    quo = a / b;
    rem = a % b;
    cout << "Quotient : " << quo << endl;
    cout << "Remainder : " << rem;
    return 0;
}
