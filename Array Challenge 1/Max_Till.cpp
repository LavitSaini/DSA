#include <iostream>
using namespace std;

int main()
{
    int m = -19999999;
    int n;
    cout << "Enter Array Size: ";
    cin >> n;

    int arr[n];
    cout << "Enter Array Elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int j = 0; j < n; j++)
    {
        m = max(m, arr[j]);
        cout << m << endl;
    }

    return 0;
}