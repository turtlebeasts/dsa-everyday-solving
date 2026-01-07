#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    string s = "anagram";
    string t = "nagaram";
    bool isAnagram = true;

    if (s.size() != t.size())
    {
        return false;
    }

    unordered_map<char, int> freq;

    for (char c : s)
    {
        freq[c]++;
    }

    for (char c : t)
    {
        freq[c]--;
    }

    for (auto c : freq)
    {
        if (c.second != 0)
        {
            isAnagram = false;
            break;
        }
    }

    return isAnagram;
}