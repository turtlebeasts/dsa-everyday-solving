#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    string s = "leetcode";
    unordered_map<char, int> freq;

    for (char c : s)
    {
        freq[c]++;
    }

    for (char c : s)
    {
        if (freq[c] == 1)
        {
            cout << c << " Appeared once";
            break;
        }
    }

    return 0;
}