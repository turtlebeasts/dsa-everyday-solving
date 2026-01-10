#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {1, 3, 5, 7, 9, 11};
    int target = 7;
    // output 3;
    int i = 0, j = nums.size() - 1, mid;
    while (i <= j)
    {
        mid = i + (j - i) / 2;
        if (nums[mid] == target)
        {
            cout << mid;
            break;
        }
        else if (nums[mid] < target)
        {
            i = mid;
        }
        else
        {
            j = mid;
        }
    }
    return 0;
}