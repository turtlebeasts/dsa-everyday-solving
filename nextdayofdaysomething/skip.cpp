#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {3, 0, 5, 1, 0, 8, 3};
    int skip = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 0)
        {
            skip++;
        }
        else if (skip > 0)
        {
            skip--;
        }
        else
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}