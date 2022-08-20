// Recursive function to print binary of a given decimal number
#include <stdio.h>
void printBinary(int n) 
{
    if(n != 0) 
    {
        printBinary(n / 2);
        printf("%d", n % 2);
    }
}