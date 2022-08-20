// Recursive function to calculate factorial of a given number
#include <stdio.h>
int Nfactorial(int n)
{
    int f;
    if (n == 1) {
        return 1;
    }
    f = n * Nfactorial(n - 1);
    return f;
}