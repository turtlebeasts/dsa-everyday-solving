#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    vector<int> arr = {1, 4, 5, 3};
    unordered_map<int, int> mp;
    int target = 6;
    int needed;

    for (int i = 0; i < arr.size(); i++)
    {
        needed = target - arr[i];
        if (mp.count(needed))
        {
            cout << arr[i] << " + " << needed << " = " << target;
        }
        mp[arr[i]] = i;
    }

    return 0;
}