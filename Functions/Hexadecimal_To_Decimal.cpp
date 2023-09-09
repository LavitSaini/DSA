#include <bits/stdc++.h>
using namespace std;

void Hexadecimal_To_Decimal(string str)
{
    int s, sum = 0, j = 0;
    s = str.size();
    for (int i = s - 1; i >= 0; i--)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            sum = sum + (pow(16, j) * (str[i] - '0'));
            j++;
          
        }
        else if (str[i] >= 'A' && str[i] <= 'F')
        {
            sum = sum + (pow(16, j) * (str[i] - 'A' + 10));
            j++;
            
        }
    }
    cout << "Decimal form: " << sum;
}

int main()
{
    string str;
    cout << "Enter a Hexadecimal Number: ";
    cin >> str;
    Hexadecimal_To_Decimal(str);
    return 0;
}
