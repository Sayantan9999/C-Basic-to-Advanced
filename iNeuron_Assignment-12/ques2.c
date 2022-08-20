// Recursive function to print first N natural numbers in reverse order
#include <stdio.h>
void printNRev(int n) 
{
    if (n != 0)
    {
        printf("%d ", n);
        printNRev(n - 1);
    }
}