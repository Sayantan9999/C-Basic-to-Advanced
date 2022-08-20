// Recursive function to calculate sum of digits of a given number
#include <stdio.h>
int DigitSumN(int n)
{
    int s;
    if (n == 0) {
        return 0;
    }
    s = (n % 10) + DigitSumN(n / 10);
    return s;
}