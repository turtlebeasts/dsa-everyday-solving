#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 5};
    unordered_set<int> myset;
    for (int i : arr)
    {
        if (myset.count(i))
        {
            cout << i << " Appeared more than once";
            break;
        }
        myset.insert(i);
    }
    return 0;
}