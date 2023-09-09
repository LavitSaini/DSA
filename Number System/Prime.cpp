#include <iostream>
using namespace std;

void prime(int n)
{
    bool con = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "Non Prime Number";
            con = 1;
            break;
        }
    }

    if (con == 0)
    {
        cout << "Prime Number";
    }
}

int main()
{
    int n;
    cout << "Enter a Number: ";
    cin >> n;

    prime(n);
    return 0;
}