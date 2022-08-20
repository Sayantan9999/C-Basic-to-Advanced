// Recursive function to print octal of a given decimal number
#include <stdio.h>
void printOctal(int n)
{
    if (n != 0)
    {
        printOctal(n / 8);
        printf("%d", n % 8);
    }
}