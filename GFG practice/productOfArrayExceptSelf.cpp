#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {0, 0};
    vector<int> res(arr.size(), 0);
    int product = 1;
    bool hasZero = false;
    for (int i : arr)
    {
        if (i != 0)
        {
            product *= i;
        }
        else if (i == 0 && hasZero)
        {
            product = 0;
        }
        else
        {
            hasZero = true;
        }
    }

    for (int i = 0; i < res.size(); i++)
    {
        if (arr[i] == 0)
        {
            res[i] = product;
        }
        else
        {
            res[i] = hasZero ? 0 : product / arr[i];
        }
    }

    for (int i : res)
    {
        cout << i << " ";
    }
    return 0;
}