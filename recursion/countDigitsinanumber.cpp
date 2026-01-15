#include <iostream>
using namespace std;

int countDigits(int i)
{
    if (i >= 0 && i <= 9)
        return 1;
    return 1 + countDigits(i / 10);
}

int main()
{
    cout << countDigits(12345);
    return 0;
}