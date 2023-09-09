#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter Rows: ";
    cin >> n;

    cout << "Enter Columns: ";
    cin >> m;

    int arr[n][m];
    cout << "Enter Matrix Elements: \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "Index[" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    int min = arr[0][0];
    int max = arr[0][0];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (min > arr[i][j])
            {
                min = arr[i][j];
            }
            if (max < arr[i][j])
            {
                max = arr[i][j];
            }
        }
    }

    cout<<"Largest Number: " <<max <<endl;
    cout<<"Smallest Number: " <<min;

    return 0;
}