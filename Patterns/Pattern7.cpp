#include <iostream>
using namespace std;

class A
{
    int n;

public:
    void input()
    {
        cout << "Enter a Number: ";
        cin >> n;
    }

    void pattern()
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                if ((i + j) % 2 == 0)
                {
                    cout << "1 ";
                }
                else
                {
                    cout << "0 ";
                }
            }
            cout << endl;
        }
    }
};

int main()
{
    A obj;
    obj.input();
    obj.pattern();
    return 0;
}