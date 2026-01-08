#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {3, 1, 4, 2, 5};
    vector<int> prefix(arr.size());
    int l = 0;
    int r = 4;

    prefix[0] = arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    if (l >= 0 && r < arr.size() && l <= r)
    {
        if (l == 0)
        {
            cout << prefix[r];
        }
        else
        {
            cout << prefix[r] - prefix[l - 1];
        }
    }
    else
    {
        cout << "Invalid range";
    }
    return 0;
}