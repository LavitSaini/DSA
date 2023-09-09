#include <iostream>
using namespace std;

int main()
{
    int r1, c1, r2, c2;
    cout << "Enter First Matrix Rows and Columns: ";
    cin >> r1 >> c1;

    cout << "Enter Second Matrix Rows and Columns: ";
    cin >> r2 >> c2;

    if (c1 != r2)
    {
        cout << "Matrix multiplication is not possible due to incompatible dimensions...";
        return 0;
    }
    else
    {

        int arr1[r1][c1], arr2[r2][c2], res[r1][c2];

        // Assign 0 Value to All the Indices of res Matrix...
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                res[i][j] = 0;
            }
        }

        cout << "\nEnter First Matrix Elements: \n";
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                cout << "Index[" << i << "][" << j << "]: ";
                cin >> arr1[i][j];
            }
        }

        cout << "\nFirst Matrix is: \n\n";
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                cout << arr1[i][j] << "  ";
            }
            cout << endl;
        }

        cout << "\nEnter Second Matrix Elements: \n";
        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                cout << "Index[" << i << "][" << j << "]: ";
                cin >> arr2[i][j];
            }
        }

        cout << "\nSecond Matrix is: \n\n";
        for (int i = 0; i < r2; i++)
        {

            for (int j = 0; j < c2; j++)
            {
                cout << arr2[i][j] << "  ";
            }
            cout << endl;
        }

        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                for (int k = 0; k < c1; k++)
                {
                    res[i][j] += (arr1[i][k] * arr2[k][j]);
                }
            }
        }

        cout << "\nMultiplication of Two Matrices: \n\n";
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                cout << res[i][j] << "  ";
            }
            cout << endl;
        }

        cout << endl;
    }
    return 0;
}
