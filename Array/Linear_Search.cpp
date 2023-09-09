#include <bits/stdc++.h>
using namespace std;

int linear_Search(int arr[], int n, int k)
{
    for (int i = 0; i < n; i++)
    {

        if (arr[i] == k)
        {
            cout << arr[i] << " Index Number: ";
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter Array Size: ";
    cin >> n;
    // Array is Decelared After n Variable Input...
    int arr[n];

    cout << "Enter Array Elemnts: ";
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
    }

    int k;
    cout << "Enter Elements You Want to Search in Array: ";
    cin >> k;

    cout << linear_Search(arr, n, k);
    return 0;
}