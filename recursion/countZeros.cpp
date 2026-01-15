#include <iostream>
using namespace std;

int countZeros(int i, int total = 0)
{
    if (i == 0)
        return total == 0 ? 1 : total;
    if (i % 10 == 0)
        total++;
    return countZeros(i / 10, total);
}
int main()
{
    cout << countZeros(102030);
    return 0;
}