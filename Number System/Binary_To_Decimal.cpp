#include <iostream>
#include<math.h>
using namespace std;

int Binary_To_Decimal(int n)
{
    int rem, dec = 0, i = 0;
    while(n > 0){
        rem = n % 10;
        dec = dec + rem * pow(2, i);
        i++;
        n /= 10;
    }

    cout<<"Decimal form: " <<dec;
}

int main()
{
    int n;
    cout << "Enter a Binary Number: ";
    cin >> n;

    Binary_To_Decimal(n);
    return 0;
}