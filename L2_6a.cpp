//transpose using triplet representation
#include <iostream>
using namespace std;

#define MAX 100

struct Sparse
{
    int row;
    int col;
    int value;
};

int main()
{
    Sparse a[MAX], transpose[MAX];
    int rows, cols, n;

    cout << "Enter number of rows, columns and non-zero elements: ";
    cin >> rows >> cols >> n;

    a[0].row = rows;
    a[0].col = cols;
    a[0].value = n;

    cout << "Enter row, column and value:\n";

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].row >> a[i].col >> a[i].value;
    }

    // Transpose
    transpose[0].row = cols;
    transpose[0].col = rows;
    transpose[0].value = n;

    int k = 1;

    for (int col = 0; col < cols; col++)
    {
        for (int i = 1; i <= n; i++)
        {
            if (a[i].col == col)
            {
                transpose[k].row = a[i].col;
                transpose[k].col = a[i].row;
                transpose[k].value = a[i].value;
                k++;
            }
        }
    }

    cout << "\nOriginal Matrix (Triplet):\n";
    cout << "Row\tColumn\tValue\n";

    for (int i = 0; i <= n; i++)
    {
        cout << a[i].row << "\t"
             << a[i].col << "\t"
             << a[i].value << endl;
    }

    cout << "\nTranspose Matrix (Triplet):\n";
    cout << "Row\tColumn\tValue\n";

    for (int i = 0; i <= n; i++)
    {
        cout << transpose[i].row << "\t"
             << transpose[i].col << "\t"
             << transpose[i].value << endl;
    }

    return 0;
}

   
