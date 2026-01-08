#include <iostream>
#include <vector>
#include <sstream>
#include <unordered_map>

using namespace std;

int main()
{
    string s = "this is a test this is a test this";
    vector<string> words;
    unordered_map<string, int> wordCount;
    stringstream ss(s);
    string word;
    int count = 1;

    while (ss >> word)
    {
        words.push_back(word);
    }

    for (string w : words)
    {
        wordCount[w]++;
    }

    for (auto w : wordCount)
    {
        if (w.second > count)
        {
            word = w.first;
            count = w.second;
        }
    }

    cout << word << " " << count;
    return 0;
}