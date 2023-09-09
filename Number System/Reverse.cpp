#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a Number: ";
    cin >> n;

    int reverse = 0;
    cout << "Number After Reversing: ";
    while (n > 0)
    {
        reverse = n % 10;
        cout << reverse;
        n = n / 10;
    }
    return 0;
}