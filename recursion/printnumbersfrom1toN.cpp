#include <iostream>
using namespace std;

void printNumbers(int i)
{
    if (i == 0)
        return;
    printNumbers(i - 1);
    cout << i << " ";
}

int main()
{
    printNumbers(10);
    return 0;
}