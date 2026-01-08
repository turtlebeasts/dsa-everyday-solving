// return number of subarrays whos sum = k
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int subarraySum(vector<int> &nums, int k)
{
    unordered_map<int, int> freq;
    freq[0] = 1;

    int currSum = 0;
    int count = 0;

    for (int x : nums)
    {
        currSum += x;

        if (freq.find(currSum - k) != freq.end())
        {
            count += freq[currSum - k];
        }

        freq[currSum]++;
    }

    return count;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8};
    cout << subarraySum(nums, 6);
    return 0;
}