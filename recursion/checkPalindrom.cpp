#include <iostream>
using namespace std;

bool isPalindrom(string s, int l, int r)
{
    if (l >= r)
        return true;
    if (s[l] != s[r])
        return false;
    return isPalindrom(s, l + 1, r - 1);
}

int main()
{
    if (isPalindrom("natany", 0, 5))
    {
        cout << "Palindrom";
    }
    else
    {
        cout << "Not Palindrom";
    }
    return 0;
}