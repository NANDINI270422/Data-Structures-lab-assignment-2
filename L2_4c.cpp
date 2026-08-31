//delete all the vowels from the string

#include <iostream>
using namespace std;

int main()
{
    string a;

    cout << "Enter a string: ";
    cin >> a;

    cout << "String without vowels: ";

    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] != 'a' && a[i] != 'e' && a[i] != 'i' &&
            a[i] != 'o' && a[i] != 'u')
        {
            cout << a[i];
        }
    }

    return 0;
}