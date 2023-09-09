#include <iostream>
using namespace std;

int main()
{
    int r, c;
    cout << "Enter Rows of Matrix: ";
    cin >> r;

    cout << "Enter Columns of Matrix: ";
    cin >> c;

    int arr[r][c], transpose[r][c];
    cout << "Enter Matrix Elements: \n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "Index[" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    cout << "Matrix is: \n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }

    // Interchanging the Elements...
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            transpose[j][i] = arr[i][j];
        }
    }

    cout << "Matrix After Transpose: \n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << transpose[i][j] << "  ";
        }
        cout << endl;
    }

    return 0;
}