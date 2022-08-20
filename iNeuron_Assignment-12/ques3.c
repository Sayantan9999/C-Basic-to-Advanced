// Recursive function to print first N odd natural numbers
#include <stdio.h>
void printNOdd(int n)
{
    if (n != 0)
    {
        printNOdd(n - 1);
        printf("%d ", 2 * n - 1);
    }
}
