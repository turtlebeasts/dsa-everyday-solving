#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    string s = "anagram";
    string t = "nagaram";
    unordered_map<char, int> sFreq;
    unordered_map<char, int> tFreq;

    if (s.length() != t.length())
    {
        cout << "Not anagram";
        return 0;
    }
    for (char c : s)
    {
        sFreq[c]++;
    }

    for (char c : t)
    {
        tFreq[c]++;
    }

    for (auto &element : sFreq)
    {
        if (tFreq[element.first] != element.second)
        {
            cout << "Not anagram";
            return 0;
        }
    }

    cout << "Is anagram";

    return 0;
}