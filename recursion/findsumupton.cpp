#include <iostream>
using namespace std;

int findSum(int i)
{
    if (i == 0)
        return 0;
    return i % 10 + findSum(i / 10);
}

int main()
{
    cout << findSum(1234);
    return 0;
}