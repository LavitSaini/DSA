#include <iostream>
using namespace std;

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

    cout << "Array Elements: \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }

    cout << "\n";
    int min = arr[0], max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        else if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    cout << "Maximum Element of Array is: " << max << endl;
    cout << "Minimum Element of Array is: " << min;
}