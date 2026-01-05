#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {5, 10, 15, 20};
    vector<int> prefix(arr.size());
    int k = 3;

    prefix[0] = arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    if (k > 0 && k <= arr.size())
    {
        cout << prefix[k - 1];
    }
    else
    {
        cout << "invalid range";
    }
    return 0;
}