//sorting the strings 
#include <iostream>
using namespace std;

int main()
{
    string a[5];
    string temp;

    cout << "Enter 5 strings:" << endl;

    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    cout << "Strings in alphabetical order:" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}