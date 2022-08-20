// Recursive function to find and print reverse of a given number
#include <stdio.h>
int ReverseN(int n, int m) // The value of m must be 0 while calling ReverseN function
{
    if(n == 0) {
        return m;
    }
    m = (m * 10) + (n % 10);
    ReverseN((n / 10) , m);
}