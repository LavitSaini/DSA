#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter SubArray Size: ";
    cin >> n;

    int arr[n];
    cout << "Enter SubArray Elements: \n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int MaxSum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int Sum = 0;
            for (int k = i; k <= j; k++)
            {
                Sum += arr[k];
            }
            MaxSum = max(MaxSum, Sum);
        }
    }

    cout<<"Maximum SubArray Sum is: " <<MaxSum;
    return 0;
}