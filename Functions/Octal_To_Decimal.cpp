#include <iostream>
#include <math.h>
using namespace std;

void Octal_To_Decimal(int n)
{

    int num, count = 0, sum = 0;
    while (n > 0)
    {
        num = n % 10;
        num = num * pow(8/*Base*/, count/*Power*/);
        count++; 
        sum += num;
        n /= 10;
    }

    cout << "Decimal form: " << sum;
}

int main()
{
    int n;
    cout << "Enter a Octal Number: ";
    cin >> n;

    Octal_To_Decimal(n);
    return 0;
}