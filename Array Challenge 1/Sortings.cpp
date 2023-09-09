#include <iostream>
using namespace std;


void Selection_Sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "Array After Selection Sort: \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
}

void Bubble_Sort(int arr[], int n)
{
    int count = 1;
    while (count < n)
    {
        for (int i = 0; i < n - count; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }

        count++;
    }

    cout << "Array After Bubble Sort: \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
}

void Insertion_Sort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int cur = arr[i];
        int j = i - 1;
        while (arr[j] > cur && j >= 0)
        {
            arr[j] = cur;
            j--;
        }
        cur = arr[i + j];
    }

    cout << "Array After Insertion Sort: \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
}

int main()
{
    int n;
    cout << "Enter Array Elments: ";
    cin >> n;

    int arr[n];
    cout << "Enter Array Elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Array Before Sorting: \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }

    cout << "\n";
    Selection_Sort(arr, n);
    cout << "\n";
    Bubble_Sort(arr, n);
    cout << "\n";
    Insertion_Sort(arr, n);

    return 0;
}