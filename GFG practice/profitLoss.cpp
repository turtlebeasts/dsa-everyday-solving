#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> prices = {1, 3, 6, 9, 11};
    int i = 0;
    int j = 1;
    int total = 0;

    while (j < prices.size())
    {
        if (prices[i] < prices[j])
        {
            total = max(total, prices[j] - prices[i]);
        }
        else
        {
            i = j;
        }
        j++;
    }

    cout << total;
    return 0;
}