#include <iostream>
using namespace std;

int reverseANumber(int i)
{
    if (i == 0)
        return 0;
    return i * 10 + reverseANumber(i / 10);
}

int main()
{
    cout << reverseANumber(1234);
    return 0;
}
