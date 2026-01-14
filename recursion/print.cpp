#include <iostream>
using namespace std;

void print(int i)
{
    if (i == 0)
        return;
    print(i - 1);
    cout << i << " ";
}

int main()
{
    print(10);
    return 0;
}