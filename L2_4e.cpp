//uppercase to lowercase
#include <iostream>
using namespace std;

int main()
{
    char ch;

    cout << "Enter an uppercase character: ";
    cin >> ch;

    ch = ch + 32;

    cout << "Lowercase character: " << ch;

    return 0;
}