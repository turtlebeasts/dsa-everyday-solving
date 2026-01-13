#include <iostream>
using namespace std;

int main()
{
    int num = 16;

    int i = 0, j = num, mid;

    while (i <= j)
    {
        mid = i + (j - i) / 2;
        if (mid * mid == num)
        {
            cout << "Perfect square: " << mid << " x " << mid << " = " << num;
            break;
        }
        else if (mid * mid > num)
        {
            j = mid - 1;
        }
        else
        {
            i = mid + 1;
        }
    }
    return 0;
}