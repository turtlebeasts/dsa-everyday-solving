#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> freq(26, 0);
    string s = "tree";
    char highest = s[0];
    int highestFreq = 0;

    for (char c : s)
    {
        freq[c - 'a']++;
    }

    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (freq[s[i] - 'a'] > highestFreq)
        {
            highestFreq = freq[s[i] - 'a'];
            highest = s[i];
        }
    }

    cout << highest;
    return 0;
}