//binary search  
#include <iostream>
using namespace std;

int main()
{
    int a[] = {1, 2, 3, 5, 6};
    int n = 6;

    int low = 0;
    int high = n - 2;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (a[mid] == mid + 1)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    cout << "Missing number is: " << low + 1;

    return 0;
}