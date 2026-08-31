#include <iostream>
using namespace std;

int main()
{
    int n;
    int A[100];
    int count =0;
    cout<< "enter the number of elements";
    cin>>n;
    cout << "enter the elements";
    for (int i=0; i<n; i++)
    {cin>>A[i];}
    for (int i=0; i<n-1 ;i++)
    {
        for (int j=i+1; j<n; j++)
        {
            if (A[i] > A[j])
            {
                count++;
            }
        }
    }
    cout << "number of inversions: " << count << endl;
    return 0;
}