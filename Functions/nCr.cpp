#include <iostream>
using namespace std;

int fac(int x)
{
    int fact = 1;
    for (int i = 1; i <= x; i++)
    {
        fact *= i;
    }

    return fact;
}

int main()
{
    int n, r;
    cout << "Enter Two Numbers: ";
    cin >> n >> r;

    cout<<fac(n) <<" " <<fac(r) <<" " <<fac(n-r) <<endl;
    int nCr = fac(n) / (fac(r) * fac(n - r));
    cout << nCr;
    return 0;
}