#include <iostream>
using namespace std;

int main()
{
    int n, key;
    int A[100];

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements in sorted order: ";
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    int low = 0;
    int high = n - 1;
    int found = 0;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (A[mid] == key)
        {
            cout << "Element found at position " << mid + 1 << endl;
            found = 1;
            break;
        }
        else if (A[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if (found == 0)
    {
        cout << "Element not found" << endl;
    }

    return 0;
}