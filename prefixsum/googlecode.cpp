#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    vector<string> words = {"a", "bb", "acd", "ace"};
    string s = "abcdek";
    vector<int> freq(26, 0);
    vector<int> temp(26);

    for (char c : s)
    {
        freq[c - 'a']++;
    }

    temp = freq;

    for (string word : words)
    {
        // tried but couldn't solve
    }

    return 0;
}