#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> arr = {1, 2, 3, 4};
    vector<int> prefix;

    prefix.push_back(arr[0]);
    for (int i = 1; i < arr.size(); i++)
    {
        prefix.push_back(prefix[i - 1] + arr[i]);
    }

    for (int i : prefix)
    {
        cout << i << " ";
    }
    return 0;
}