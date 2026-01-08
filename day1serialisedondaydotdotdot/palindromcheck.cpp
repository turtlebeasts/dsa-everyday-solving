#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    string s = "aabbb";
    int oddCount = 0;
    unordered_map<char, int> charCount;

    for (char alp : s)
    {
        charCount[alp]++;
    }

    for (auto &alp : charCount)
    {
        if (alp.second % 2 != 0)
        {
            oddCount++;
        }
    }

    if ((s.length() % 2 != 0 && oddCount == 1) || (s.length() % 2 == 0 && oddCount == 0))
    {
        cout << "Palindrom";
    }
    else
    {
        cout << "Not Palindrom";
    }

    return 0;
}