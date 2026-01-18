#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main()
{
    vector<string> strs = {"act", "pots", "tops", "cat", "stop", "hat"};
    unordered_map<string, vector<string>> groups;
    vector<vector<string>> results;

    for (int i = 0; i < strs.size(); i++)
    {
        string s = strs[i];
        sort(s.begin(), s.end());
        if (groups.count(s))
        {
            groups[s].push_back(strs[i]);
        }
        else
        {
            groups[s] = {strs[i]};
        }
    }

    for (auto &s : groups)
    {
        results.push_back(s.second);
    }

    return 0;
}