#include <iostream>
using namespace std;

float factorial(int n)
{
    float fac = 1;
    for (int i = 1; i <= n; i++)
    {
        fac = fac * i;
    }

    return fac;
}

int main()
{
    float n;
    cout << "Enter a Number for factorial: ";
    cin >> n;

    cout<<"Factorial is: " <<factorial(n);
    return 0;
}