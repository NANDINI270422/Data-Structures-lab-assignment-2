#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter size of matrix: ";
    cin >> n;

    int a[100];

    int total = n * (n + 1) / 2;

    cout << "Enter " << total << " elements:" << endl;

    for (int i = 0; i < total; i++)
    {
        cin >> a[i];
    }

    int k = 0;

    cout << "Lower Triangular Matrix:" << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i >= j)
            {
                cout << a[k] << " ";
                k++;
            }
            else
            {
                cout << "0 ";
            }
        }

        cout << endl;
    }

    return 0;
}