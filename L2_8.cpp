#include <iostream>
using namespace std;
int main()
{
    int n;
    int A[100];
    int count =1;
     cout<<"enter the number of elements";
     cin>>n;
     cout<<"enter the elements";
     for (int i=0; i<n; i++)
     {cin>>A[i];}
     for (int i=0; i<n-1;i++)
     {
    for (int j=i+1;j<n;j++)
        {if (A[i]>A[j]){
            int temp =A[i];
            A[i]=A[j];
            A[j]= temp;
        }}}
        
        for (int i=1;i<n;i++)
        {if (A[i]!=A[i-1])
            {
        count++;}
        }
        cout<<"number of distinct elements:"<<count<<endl;

}