// Recursive function to print first N even natural numbers in reverse order
#include <stdio.h>
void printNEvenRev(int n)
{
    if (n != 0)
    {
        printf("%d ", 2 * n);
        printNEvenRev(n - 1);
    }
}