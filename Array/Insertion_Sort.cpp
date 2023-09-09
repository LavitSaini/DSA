#include <iostream>
using namespace std;

void Insertion_Sort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int j = i - 1;
        while (arr[j] > current && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
         arr[j + 1] = current;
    }

    cout << "Array Elements After Insertion Sort: ";
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

    int arr[n];
    cout << "Enter Array Elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Array ELements Before Insertion Sort: ";
    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << "\t";
    }

    cout << "\n";
    Insertion_Sort(arr, n);
    return 0;
}