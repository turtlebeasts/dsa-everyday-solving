#include <iostream>
#include <vector>

int main()
{
    std::vector<int> nums = {1, 1, 2, 3, 4, 5, 6, 7};
    int count = 0;
    int x = 5;
    int l = 3;
    int r = 6;

    for (int i = l; i <= r; i++)
    {
        if (x > nums[i])
        {
            count++;
        }
    }

    std::cout << count;
    return 0;
}