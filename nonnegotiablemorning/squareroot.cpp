#include <iostream>
using namespace std;

int main()
{
    int x = 8;
    int i = 1, j = x / 2, lowest = 0;

    while (i <= j)
    {
        int mid = i + (j - i) / 2;
        if (mid * mid <= x)
        {
            lowest = mid;
            i = mid + 1;
        }
        else
        {
            j = mid - 1;
        }
    }
    cout << lowest;
    return 0;
}