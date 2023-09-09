#include <iostream>
using namespace std;

void Merge(int arr[], int l, int mid, int r)
{
    int n1 = mid - l + 1;
    int n2 = r - mid;

    int a1[n1];
    int a2[n2];

    for (int i = 0; i < n1; i++)
    {
        a1[i] = arr[i + 1];
    }

    for (int i = 0; i < n2; i++)
    {
        a2[i] = arr[mid + 1 + i];
    }

    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2)
    {
        if (a1[i] <= a2[j])
        {
            arr[k] = a1[i];
            i++;
        }

        else
        {
            arr[k] = a2[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = a1[i];
        k++;
        i++;
    }

    while (j < n2)
    {
        arr[k] = a2[j];
        k++;
        j++;
    }
}

void Merge_Sort(int arr[], int s, int e)
{
    if (s >= e)
    {
        return;
    }
    else
    {
        int mid = (s + e) / 2;
        Merge_Sort(arr, s, mid);
        Merge_Sort(arr, mid + 1, e);

        Merge(arr, s, mid, e);
    }
}

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

    cout << "Array Before Sorting: \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    Merge_Sort(arr, 0, 4);

    cout << "\nArray After Sorting: \n";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}