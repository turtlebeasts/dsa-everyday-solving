#include <iostream>
#include <vector>
using namespace std;

string encode(vector<string> &strs)
{
    string result = "";
    if (!strs.size())
    {
        return "none";
    }
    for (int i = 0; i < strs.size(); i++)
    {
        if (i + 1 == strs.size())
        {
            result += strs[i];
        }
        else
        {
            result += strs[i] + "-";
        }
    }
    return result;
}

vector<string> decode(string s)
{
    vector<string> result;
    if (s == "none")
    {
        return result;
    }
    else
    {
        string word = "";
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '-')
            {
                result.push_back(word);
                word = "";
            }
            else
            {
                word += s[i];
            }
        }
        result.push_back(word);
    }

    return result;
}

int main()
{
    // vector<string> input = {"Hello", "World"};
    // vector<string> input = {"Hello"};
    vector<string> input = {""};
    // cout << encode(input);
    decode(encode(input));
    return 0;
}