#include <iostream>
using namespace std;

// What is SubArray --> Continous Part of the Array...! [n*(n+1)/2]

int main()
{
    int n;
    cout << "Enter Array Size: ";
    cin >> n;

    int arr[n];
    cout << "Enter Array Elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    cout << "Full Array: \n";
    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << "\t";
    }

    cout << "\n";

    int index[2];
    cout << "Enter Two Index Numbers for SubArray: ";
    for (int i = 0; i < 2; i++)
    {
        cin >> index[i];
        if ((index[i] > n) || (index[i] < 0))
        {
            cout << "Wrong Index Input Program is Exit...";
            return 0;
        }
    }

    for (int i = 0; i < 1; i++)
    {
        for (int j = i + 1; j < 2; j++)
        {
            if (index[i] > index[j])
            {
                int temp = index[i];
                index[i] = index[j];
                index[j] = temp;
            }
        }
    }

    int a, b;

    for (int i = 0; i < 2; i++)
    {
        if (i == 0)
        {
            a = index[0];
        }
        else
        {
            b = index[1];
        }
    }

    cout << "SubArray: \n";

    for (int i = a; i <= b; i++)
    {

        cout << arr[i] << "\t";
    }

    cout << "\nPending Part Of Array: \n";

    for (int i = 0; i < a; i++)
    {

        cout << arr[i] << "\t";
    }

    for (int j = a; j <= b; j++)
    {
        cout << 0
             << "\t";
    }

    for (int k = b + 1; k < n; k++)
    {
        cout << arr[k] << "\t";
    }
    cout << endl;

    return 0;
}