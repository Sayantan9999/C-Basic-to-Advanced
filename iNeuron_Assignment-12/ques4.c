// Recursive function to print first N odd natural numbers in reverse order
#include <stdio.h>
void printNOddRev(int n)
{
    if (n != 0)
    {
        printf("%d ", 2 * n - 1);
        printNOddRev(n - 1);
    }
}