#include <iostream>
using namespace std;

void Prime_In_Range(int a, int b)
{
    int count;
    for (int i = a; i <= b; i++)
    {
        count = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }

        if (count == 2)
        {
            cout << i << endl;
        }
    }
}

int main()
{
    int a, b;
    cout << "Enter First Number of Range: ";
    cin >> a;

    cout << "Enter Second Number of Range: ";
    cin >> b;

    Prime_In_Range(a, b);
    return 0;
}