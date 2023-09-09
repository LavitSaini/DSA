#include <iostream>
#include <limits.h>
using namespace std;

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

    int big = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (big < arr[i])
        {
            big = arr[i];
        }
    }

    int index[big];

    for (int i = 0; i < big; i++)
    {
        index[i] = -1;
    }

    int s = INT_MAX;
    bool v = false;
    for (int i = 0; i < n; i++)
    {
        if (index[arr[i]] != -1)
        {
            s = min(s, index[arr[i]]);
            v = true;
        }
        else
        {
            index[arr[i]] = i;
        }
    }

    if (v == false)
    {
        cout <<"-1" << endl;
    }
    else
    {
        cout << s + 1;
    }
    return 0;
}