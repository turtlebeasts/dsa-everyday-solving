#include <iostream>
#include <vector>
using namespace std;

bool isSorted(vector<int> v, int i)
{
    if (i == 0)
        return true;
    if (v[i] < v[i - 1])
        return false;
    return isSorted(v, i - 1);
}

int main()
{
    if (isSorted({1, 2, 3, 4, 5}, 4))
    {
        cout << "Is sorted vector";
    }
    else
    {
        cout << "Not sorted";
    }
    return 0;
}