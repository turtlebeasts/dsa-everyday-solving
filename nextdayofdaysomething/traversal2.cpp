#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> nums = {2, 3, 4, 6};
    vector<int> res;

    int sum = 0;

    for (int i : nums)
    {
        if (i % 2 == 0)
        {
            sum += 1;
        }
        res.push_back(sum);
    }

    for (int i : res)
    {
        cout << i << " ";
    }

    return 0;
}