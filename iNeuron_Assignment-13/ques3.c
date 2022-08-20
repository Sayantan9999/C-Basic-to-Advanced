// Recursive function to calculate sum of first N Even natural numbers
#include <stdio.h>
int EvenSumN(int n)
{
    int s;
    if (n == 1) {
        return 2;
    }
    s = (2 * n) + EvenSumN(n - 1);
    return s;
}