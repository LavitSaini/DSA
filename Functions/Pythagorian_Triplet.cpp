#include <iostream>
using namespace std;

bool Pythagorian_Triplet(int x, int y, int z)
{
    int greatest;
    if (x > y)
    {
        if (x > z)
        {
            greatest = x;
        }
        else
        {
            greatest = z;
        }
    }

    else
    {
        if (y > z)
        {
            greatest = y;
        }
        else
        {
            greatest = z;
        }
    }

    if ((greatest * greatest) == (y * y) + (z * z))
    {
        return true;
    }
    else if ((greatest * greatest) == (x * x) + (z * z))
    {
        return true;
    }
    else if ((greatest * greatest) == (x * x) + (y * y))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int x, y, z;
    cout << "Enter Three Numbers: ";
    cin >> x >> y >> z;

    if (Pythagorian_Triplet(x, y, z))
    {
        cout << "Pythagorian Triplet...";
    }
    else
    {
        cout << "Not Pythagorian Triplet...";
    }
    return 0;
}