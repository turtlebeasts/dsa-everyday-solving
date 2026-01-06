#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    unordered_map<string, vector<string>> anagrams;
    vector<vector<string>> solution;
    vector<string> temp;
    for (string s : strs)
    {
        string key = s;
        sort(key.begin(), key.end()); // create signature
        anagrams[key].push_back(s);
    }

    for (auto &entry : anagrams)
    {
        temp.clear();
        for (auto &word : entry.second)
        {
            temp.push_back(word);
        }
        solution.push_back(temp);
    }

    return 0;
}