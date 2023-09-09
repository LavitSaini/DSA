#include <bits/stdc++.h>
using namespace std;

int Binary_To_Decimal(int n)
{
    int rem, i = 0, sum = 0;
    while (n > 0)
    {
        rem = n % 10;
        sum += rem * pow(2, i);
        i++;
        n /= 10;
    }
    return sum;
}

void Decimal_To_Binary(int n)
{
    int bin[50], i = 0;
    while (n > 0)
    {
        bin[i] = n % 2;
        i++;
        n /= 2;
    }

    cout << "Sum of Two Binary Numbers is: ";
    for (int j = i - 1; j >= 0; j--)
    {
        cout << bin[j];
    }
}

int main()
{
    int n1, n2;
    cout << "Enter first  Binary Number: ";
    cin >> n1;

    cout << "Enter Second Binary Number: ";
    cin >> n2;

    int b1 = Binary_To_Decimal(n1);
    int b2 = Binary_To_Decimal(n2);

    int sum = b1 + b2;
    Decimal_To_Binary(sum);
    return 0;
}