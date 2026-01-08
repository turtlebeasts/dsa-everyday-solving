// longest substring without repeating characters
// yup, I'll start commenting out my codes,
// no it's not chatgpt codes,
//  then what's the use of learning DSA?

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    string s = "abcabcbb";
    int left = 0;
    int right = 1;
    string longestWord = "" + s[0];
    string temp;

    while (left != right && right != s.length())
    {
        temp = s[left];
        if (s[left] == s[right])
        {
            left++;
            right++;
        }
        else
        {
            temp += s[right];
            right++;
        }
    }
}

// and that's it, out of nowhere I thought of doing window problems, and failed,
// tomorrow I'll learn this. tonight it's late