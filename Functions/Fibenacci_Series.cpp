#include <iostream>
using namespace std;

void fibenacci(int n)
{
    int a = 0, b = 1, c;
    cout << a << "\n"
         << b <<"\n";
    for (int i = 2; i < n; i++)
    {
        c = a + b;
        cout << c << endl;
        a = b;
        b = c;
    }
}

int main()
{
    int n;
    cout << "Enter the Number of Fibenacci Terms Print: ";
    cin >> n;

    fibenacci(n);
    return 0;
}
