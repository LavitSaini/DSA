#include <iostream>
using namespace std;

int Binary_Search(int arr[], int n, int k)
{
    int st = 0;
    int en = n;
    while (st <= en)
    {
        int mid = (st + en) / 2;
        if (arr[mid] == k)
        {
            return mid;
        }
        else if (arr[mid] > k)
        {
            en = mid - 1;
        }
        else
        {
            st = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int n, k;
    cout << "Enter Array Size: ";
    cin >> n;

    int arr[n];
    cout << "Enter Array Elements: \n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter Element for Search: ";
    cin >> k;

    cout << Binary_Search(arr, n, k);
    return 0;
}