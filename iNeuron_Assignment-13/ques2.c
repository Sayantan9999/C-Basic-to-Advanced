// Recursive function to calculate sum of first N odd natural numbers
#include <stdio.h>
int OddSumN(int n)
{
    int s;
    if (n == 1) {
        return 1;
    } 
    s = (2 * n - 1) + OddSumN(n - 1);
    return s;
}