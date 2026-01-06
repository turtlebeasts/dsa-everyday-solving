#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main()
{
    vector<int> arr = {4, 5, 1, 2, 1, 4, 5};
    unordered_map<int, int> seen;
    for (int i : arr)
    {
        if (seen.count(i))
        {
            cout << "Element: " << i << " repeated";
            break;
        }
        seen[i]++;
    }
    return 0;
}