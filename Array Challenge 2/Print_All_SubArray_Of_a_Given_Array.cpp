#include<bits/stdc++.h>
using namespace std;

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
    cout<<"All the Possible SubArray of the Given Array: \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            
            for (int k = i; k <= j; k++)
            { 
              cout<<arr[k] <<" ";
            }
            cout<<endl;
        }
        cout<<"\n \n";
    }
    return 0;
}