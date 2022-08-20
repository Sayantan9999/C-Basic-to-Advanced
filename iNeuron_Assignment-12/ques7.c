// Recursive function to print first square of N natural numbers
#include <stdio.h>
void printNSquare(int n)
{
    if (n != 0)
    {
        printNSquare(n - 1);
        printf("%d ", n * n);
    }
}