#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Array Size: ";
    cin >> n;

    int arr[n];
    cout << "Enter Array Elements: \n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Array Before Deletion: \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }

    cout << endl;

    int del;
    cout << "Enter (0 to n-1) Any Index Number to Delete the Element: ";
    cin >> del;

    for (int i = 0; i < n; i++)
    {
        if (del >= n)
        {
            cout << "Wrong Index Number Out of Array Range...";
            return 0;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (del == i)
        {
            for (int i = del; i < n - 1; i++)
            {
                arr[i] = arr[i + 1];
            }
        }
    }

    cout << "Array After Deletion: \n";
    for (int i = 0; i < n - 1; i++)
    {
        cout << arr[i] << "\t";
    }

    return 0;
}