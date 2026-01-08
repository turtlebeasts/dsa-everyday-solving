#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string s = "aaaaaaaaaaabbbbbbbbbcccccccccccccc";
    string result = "";
    char current = s[0];
    int count = 0;

    for (char c : s)
    {
        if (c == current)
        {
            count++;
        }
        else
        {
            result += current + to_string(count);
            current = c;
            count = 1;
        }
    }

    result += current + to_string(count);
    cout << result;
    return 0;
}