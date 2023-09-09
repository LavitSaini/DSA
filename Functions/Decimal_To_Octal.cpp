#include <bits/stdc++.h>
using namespace std;

void Decimal_To_Octal(int n)
{
    int rem[30], i = 0;
    while (n > 0)
    {
     rem[i] = n % 8;
     i++;
     n /= 8;
    }

    cout<<"Octal form: ";
    for(int j = i - 1; j >= 0; j--){
        cout<<rem[j];
    }
}

int main()
{
    int n;
    cout << "Enter a Decimal Number: ";
    cin >> n;

    Decimal_To_Octal(n);
    return 0;
}
