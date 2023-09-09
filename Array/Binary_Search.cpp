#include <bits/stdc++.h>
using namespace std;

// Only Used for Sorting Array

int Binary_Search(int arr[], int n, int k)
{

    int s = 0;
    int e = n;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == k)
        {
            return mid;
        }

        else if (arr[mid] > k)
        {
            e = mid - 1;
        }

        else
        {
            s = mid + 1;
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
    cout << "Enter Array Elements: ";
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
    }

    int k;
    cout << "Enter Elements You Want to Search in Array: ";
    cin >> k;

    cout << Binary_Search(arr, n, k);
    return 0;
}