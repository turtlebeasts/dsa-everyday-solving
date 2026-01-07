#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main()
{
    vector<int> nums = {1, 2, 3, 1};
    unordered_map<int, int> freq;

    for (int i : nums)
    {
        if (freq.count(i))
        {
            cout << "Contains duplicates " << i;
            break;
        }
        freq[i]++;
    }

    return 0;
}