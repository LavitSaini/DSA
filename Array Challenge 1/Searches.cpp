#include <iostream>
using namespace std;

int Linear_Search(int arr[], int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            return i;
        }
    }
    return -1;
}

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

    int arr[n];
    cout << "Enter Array Elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int k;
    cout << "Enter a Element You Want to Find in Array: ";
    cin >> k;

    cout << "Index Number: " << Linear_Search(arr, n, k) << endl;
    cout << "Index Number: " << Binary_Search(arr, n, k) << endl;
    return 0;
}