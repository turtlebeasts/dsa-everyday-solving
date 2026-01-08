#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main()
{
    string s = "tree";
    map<int, string> freq;
    vector<int> freqV(26, 0);
    string res = "";

    for (char c : s)
    {
        freqV[c - 'a']++;
    }

    for (char c : s)
    {
        freq[freqV[c - 'a']] += c;
    }

    for (auto it = freq.rbegin(); it != freq.rend(); it++)
    {
        res += it->second;
    }

    cout << res;
    return 0;
}