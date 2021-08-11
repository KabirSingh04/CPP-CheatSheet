#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n1, n2, temp;
    cout << "Enter the two numbers : " << endl;
    cin >> n1 >> n2;
    cout << "---- Before swapping ----" << endl;
    cout << "number 1 = " << n1 << endl;
    cout << "number 2 = " << n2 << endl;
    temp = n1;
    n1 = n2;
    n2 = temp;
    cout << "---- After swapping ----" << endl;
    cout << "number 1 = " << n1 << endl;
    cout << "number 2 = " << n2 << endl;
    return 0;
}
