#include <iostream>
using namespace std;

void Bubble_Sort(int arr[], int n)
{
    int counter = 1;
    while (counter < n)
    {
        for (int i = 0; i < n - counter; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        counter++;
    }

    cout << "Array Elemnets After Bubble Sorting: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
}

int main()
{
    int n;
    cout << "Enter Array Size: ";
    cin >> n;
    // Array is Decelared After n Variable Input...
    int arr[n];
    cout << "Enter Array Elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Array Elements Before Bubble Sorting: ";
    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << "\t";
    }
    cout << "\n";
    Bubble_Sort(arr, n);
    return 0;
}