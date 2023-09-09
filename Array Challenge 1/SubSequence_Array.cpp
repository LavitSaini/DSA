#include <iostream>
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

    cout << "Full Array: \n";
    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << "\t";
    }

    cout << endl;

    int x;
    cout << "Enter How Many Index You Want to Seperate from Full Array: \n";
    cin >> x;

    int array[x], index[x], count = 0;
    cout << "Enter Index Numbers Between (0 to n-1): ";
    for (int k = 0; k < x; k++)
    {
        cin >> index[k];
        if (index[k] >= n)
        {
            cout << "Program is Exit Index Numbers Out of Array Size...";
            return 0;
        }
    }

    for (int i = 0; i < x - 1; i++)
    {
        for (int j = i + 1; j < x; j++)
        {
            if (index[i] > index[j])
            {
                int temp = index[i];
                index[i] = index[j];
                index[j] = temp;
            }
        }
    }

    for (int q = 0; q < n; q++)
    {
        int elm = index[count];
        if (q == elm)
        {
            array[count] = arr[elm];
            arr[elm] = 0;
            count++;
        }
    }

    cout << "Sub-Sequence Array: \n";
    for (int i = 0; i < x; i++)
    {
        cout << array[i] << "\t";
    }

    cout << "\n";
    cout << "Full Array: \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }

    return 0;
}