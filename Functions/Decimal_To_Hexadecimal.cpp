#include <bits/stdc++.h>
using namespace std;

string Decimal_To_Hexadecimal(int n)
{
    int x = 1;
    string ans = "";
    while (x <= n)

        x *= 16;
    x /= 16;

    while (n > 0)
    {
        int lastdigit = n / x;
        n -= lastdigit * x;
        x /= 16;

        if (lastdigit <= 9)
        {
            ans += to_string(lastdigit);
        }
        else
        {
            char c = 'A' + lastdigit - 10;
            ans.push_back(c);
        }
    }

    return ans;
}

int main()
{
    int n;
    cout << "Enter a Decimal Number: ";
    cin >> n;

    cout << "Hexadecimal form: " << Decimal_To_Hexadecimal(n);
    return 0;
}