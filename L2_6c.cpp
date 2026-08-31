#include <iostream>
using namespace std;

int main()
{
    int a[10][10] = {0};
    int b[10][10] = {0};
    int result[10][10] = {0};

    int r1, c1, n1;
    int r2, c2, n2;

    cout << "Enter rows, columns and non-zero elements of first matrix: ";
    cin >> r1 >> c1 >> n1;

    cout << "Enter row, column and value:" << endl;

    for (int i = 0; i < n1; i++)
    {
        int row, col, value;
        cin >> row >> col >> value;

        a[row][col] = value;
    }

    cout << "Enter rows, columns and non-zero elements of second matrix: ";
    cin >> r2 >> c2 >> n2;

    cout << "Enter row, column and value:" << endl;

    for (int i = 0; i < n2; i++)
    {
        int row, col, value;
        cin >> row >> col >> value;

        b[row][col] = value;
    }

    if (c1 != r2)
    {
        cout << "Multiplication is not possible.";
        return 0;
    }

    // Matrix multiplication

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            for (int k = 0; k < c1; k++)
            {
                result[i][j] = result[i][j]
                             + a[i][k] * b[k][j];
            }
        }
    }

    // Convert result into triplet

    cout << "Multiplication in Triplet Form:" << endl;

    int count = 0;

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            if (result[i][j] != 0)
            {
                count++;
            }
        }
    }

    cout << r1 << " " << c2 << " " << count << endl;

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            if (result[i][j] != 0)
            {
                cout << i << " "
                     << j << " "
                     << result[i][j] << endl;
            }
        }
    }

    return 0;
}