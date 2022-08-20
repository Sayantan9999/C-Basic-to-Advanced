// Recursive function to print first N even natural numbers
#include <stdio.h>
void printNEven(int n)
{
    if (n != 0)
    {
        printNEven(n - 1);
        printf("%d ", 2 * n);
    }
}