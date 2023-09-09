#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter Array Size: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i <= n - 1; i++)
    {
        cout << arr[i] <<"\t";
    }
    cout << "\n";

    int max_no = INT_MIN;
    int min_no = INT_MAX;
    for (int i = 0; i <= n - 1; i++)
    {
        max_no = max(max_no, arr[i]);
        min_no = min(min_no, arr[i]);
    }

    cout << "Max Number in Array: " << max_no << endl;
    cout << "Min Number in Array: " << min_no << endl;
    return 0;
}
