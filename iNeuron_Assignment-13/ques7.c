// Recursive function to calculate HCF of two given numbers
#include <stdio.h>
int HCF(int a , int b, int min)
{
    if(a % min == 0 && b % min == 0) {
        return min;
    }
    HCF(a, b, min - 1);
}