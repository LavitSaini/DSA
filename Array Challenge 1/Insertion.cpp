#include <iostream>
using namespace std;

int main()
{
    int n, pos, elm;
    cout << "Enter Array Size: ";
    cin >> n;

    int arr[n];
    cout << "Enter Array Elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Array Before Insertion: \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }

    cout<<endl;

    cout << "Enter Position (0 to n-1) Store New Element: ";
    cin >> pos;

    for (int i = 0; i < n; i++)
    {
        if (pos > n)
        {
            cout << "Wrong Position Number Out of Array Size...\n";
            return 0;
        }
    }

    cout << "Enter New Element for Insertion: ";
    cin >> elm;

    arr[n + 1];
    for (int i = n; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }

   arr[pos] = elm;

    cout << "Array After Insertion: \n";
    for (int i = 0; i < n + 1; i++)
    {
        cout << arr[i] << "\t";
    }

    return 0;
}