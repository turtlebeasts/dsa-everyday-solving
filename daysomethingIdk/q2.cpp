// first missing positive

#include <iostream>
#include <set>
using namespace std;

int main()
{
    int arr[] = {3, 4, -1, 1};
    set<int> myset;

    for (int i : arr)
    {
        myset.insert(i);
    }

    for (int i = 1; i < myset.size(); i++)
    {
        if (!myset.count(i))
        {
            cout << i << " is missing ";
            break;
        }
    }
    return 0;
}