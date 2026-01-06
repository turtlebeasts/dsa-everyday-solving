#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    vector<int> arr = {4, 5, 1, 2, 1, 4, 5};
    unordered_map<int, int> freq;

    for (int i : arr)
    {
        freq[i]++;
    }

    for (int i : arr)
    {
        if (freq[i] == 1)
        {
            cout << i;
            break;
        }
    }
    return 0;
}