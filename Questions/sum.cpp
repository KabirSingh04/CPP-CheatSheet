#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a;
    int b;
    int sum = 0;
    cout << "Enter the two numbers to be added" << endl;
    cin >> a >> b;
    sum = a + b;
    cout << "The sum of " << a << " and " << b << " is : " << sum;
    return 0;
}
