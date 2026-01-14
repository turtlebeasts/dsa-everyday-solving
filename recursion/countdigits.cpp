#include <iostream>
using namespace std;

int countDigits(int x)
{
    if (x == 0)
        return 1;
    return 1 + countDigits(x / 10);
}

int main()
{
    cout << countDigits(12345);
    return 0;
}