#include <iostream>
using namespace std;

int sumofdigits(int i)
{
    if (i == 0)
        return 0;
    return (i % 10) + sumofdigits(i / 10);
}
int main()
{
    cout << sumofdigits(1234);
    return 0;
}