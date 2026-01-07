#include <string>
#include <iostream>
#include <sstream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    string pattern = "abba";
    string s = "dog dog dog dog";
    string word;
    stringstream ss(s);
    vector<string> words;
    unordered_map<string, char> mapping;

    while (ss >> word)
    {
        words.push_back(word);
    }

    if (pattern.size() != words.size())
    {
        cout << "Pattern didn't matched";
        return 0;
    }

    for (int i = 0; i < pattern.size(); i++)
    {
        mapping[words[i]] = pattern[i];
    }

    for (auto e : mapping)
    {
        cout << e.first << " " << e.second << endl;
    }
    return 0;
}