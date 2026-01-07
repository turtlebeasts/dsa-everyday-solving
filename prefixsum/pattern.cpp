#include <iostream>
#include <sstream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    string s = "dog cat cat dog";
    string pattern = "abba";
    stringstream ss(s);
    string word;

    vector<string> words;
    unordered_map<string, char> sequence;

    while (ss >> word)
    {
        words.push_back(word);
    }

    if (pattern.length() != words.size())
    {
        cout << "Pattern failed";
        return 0;
    }
    for (int i = 0; i < pattern.length(); i++)
    {
        if (sequence.count(words[i]) && sequence[words[i]] != s[i])
        {
            cout << "Pattern failed";
            return 0;
        }

        sequence[words[i]] = s[i];
    }

    cout << "Pattern match";
    return 0;
}
