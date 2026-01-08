#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    string s = "swiss";
    unordered_map<char, int> freq;

    for (char c : s)
    {
        freq[c]++;
    }

    for (char c : s)
    {
        if (freq[c] < 2)
        {
            cout << c << " counts " << freq[c];
            break;
        }
    }

    return 0;
}