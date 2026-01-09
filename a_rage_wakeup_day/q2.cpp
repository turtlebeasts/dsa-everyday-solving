#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> freq(26, 0);
    string s = "abcdefghgijklmnop";
    bool isUnique = true;

    for (char a : s)
    {
        freq[a - 'a']++;
        if (freq[a - 'a'] > 1)
        {
            cout << a;
            isUnique = false;
            break;
        }
    }

    if (isUnique)
    {
        cout << "#";
    }
    return 0;
}