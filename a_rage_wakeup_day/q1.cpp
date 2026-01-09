#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main()
{
    vector<int> nums = {4, 2, -3, 1, 6};
    int k = 0;
    int currentSum = 0;
    unordered_map<int, int> memory;
    memory[0] = 1;

    for (int i : nums)
    {
        currentSum += i;
        if (memory.count(currentSum - k))
        {
            cout << "true";
            break;
        }
        memory[currentSum]++;
    }
    return 0;
}