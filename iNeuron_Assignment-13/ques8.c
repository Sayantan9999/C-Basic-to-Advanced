// Recursive function to print first n terms of fibonacci series
#include <stdio.h>

// This fibonacci function will calculate the nth term of the fibonacci series
int seriesN(int n) 
{
    int fib1, fib2, result;
    if(n == 0) {
        return 1;
    } else if(n == -1) {
        return -1;
    }
    fib1 = seriesN(n - 1);
    fib2 = seriesN(n - 2);
    result = fib1 +fib2;
    return result;
}

// This function will print n terms of the fibonacci series
void fibonacci(int n) 
{
    if(n != 0) {
        fibonacci(n - 1);
        printf("%d ", seriesN(n));
    }
}