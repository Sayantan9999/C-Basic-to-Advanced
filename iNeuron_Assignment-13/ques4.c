// Recursive function to calculate sum of squares of first N natural numbers
#include <stdio.h>
int SqSumN(int n)
{
    int s;
    if (n == 1) {
        return 1;
    }
    s = (n * n) + SqSumN(n - 1);
    return s;
}