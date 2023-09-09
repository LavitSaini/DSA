#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter Number of Rows in Matrix: ";
    cin >> n;
    cout << "Enter Number of columns in Matrix: ";
    cin >> m;

    int arr1[n][m], arr2[n][m];
    cout << "Enter First Array Elements: \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "Index " << i << " " << j << ":";
            cin >> arr1[i][j];
        }
    }

    cout << endl;

    cout << "Enter Second Array Elements: \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "Index " << i << " " << j << ":";
            cin >> arr2[i][j];
        }
    }

    cout << endl;

    cout << "Addition of Two Matrices: \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr1[i][j] + arr2[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Substraction of Two Matrices: \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr1[i][j] - arr2[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Multiplication of Two Matrices: \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr1[i][j] * arr2[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}