#include <iostream>
using namespace std;

bool isPalindrom(string s)
{
    int l = 0, r = s.size() - 1;
    while (l > r)
    {
        if (s[l] != s[r])
            return false;
        l++;
        r--;
    }
    return true;
}

int main()
{
    string s = "racecar";
    if (isPalindrom(s))
    {
        cout << "It is palindrom myean!";
    }
    else
    {
        cout << "Ha Ha heyalll naowww!";
    }

    return 0;
}