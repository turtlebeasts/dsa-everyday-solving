#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    vector<int> nums = {1, 1, 1};
    int k = 2;

    unordered_map<int, int> freq;
    freq[0] = 1;

    int currentSum = 0;
    int count = 0;

    for (int x : nums)
    {
        currentSum += x;

        if (freq.count(currentSum - k))
        {
            count += freq[currentSum - k];
        }

        freq[currentSum]++;
    }

    cout << count;
}
