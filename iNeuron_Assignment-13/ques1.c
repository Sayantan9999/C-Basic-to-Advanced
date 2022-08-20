// Recursive function to calculate sum of first N natural numbers
#include <stdio.h>
int SumN(int n) 
{
    int s;
    if(n == 1) {
        return 1;
    }
    s = n + SumN(n - 1); 
    return s;
}