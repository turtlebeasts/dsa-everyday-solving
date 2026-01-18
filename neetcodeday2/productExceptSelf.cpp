#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> nums = {0, 0};
    vector<int> output;
    int product = 0;
    bool hasZero = false;
    // check if zero is present

    for (int i : nums)
    {
        if (i > 0)
        {
            product = 1;
        }
    }

    for (int i : nums)
    {
        if (i != 0)
        {
            product *= i;
        }
        else
        {
            hasZero = true;
        }
    }

    for (int i : nums)
    {
        if (hasZero == true && i != 0)
        {
            output.push_back(0);
        }
        else
        {
            int divident = i > 0 ? i : 1;
            output.push_back(product / divident);
        }
    }

    for (int i : output)
    {
        cout << i << " ";
    }
    return 0;
}