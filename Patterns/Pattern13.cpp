#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a Number: ";
    cin >> n;

    for (int i = 0; i <= n-1; i++)
    {
       
        for (int j = n - i; j >= 0; j--)
        {
            cout << "* ";
        }
        for (int j = 0; j <= 2 * i - 1; j++)
        {
            cout << "  ";
        }
         for (int j = n - i; j >= 0; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }

    
    for (int i = n-1; i >= 0; i--)
    {
       
        for (int j = n - i; j >= 0; j--)
        {
            cout << "* ";
        }
        for (int j = 0; j <= 2 * i - 1; j++)
        {
            cout << "  ";
        }
        for (int j = n - i; j >= 0; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }

  


    return 0;
}