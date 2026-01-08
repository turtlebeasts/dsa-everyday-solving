#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> freq(26, 0);
    string s = "swiss";

    for (char c : s)
    {
        freq[c - 'a']++;
    }

    for (char c : s)
    {
        if (freq[c - 'a'] < 2)
        {
            cout << c << " counts " << freq[c - 'a'];
            break;
        }
    }
    return 0;
}