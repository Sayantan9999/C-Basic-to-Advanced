// Recursive function to print first N natural numbers
#include <stdio.h>
void printN(int n) 
{
    if(n != 0) 
    {
        printN(n - 1);
        printf("%d ", n);
    }
}
