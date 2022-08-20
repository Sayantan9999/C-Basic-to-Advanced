// Program to count no. of digits in a given number using recursion
#include <stdio.h>
int CountDigits(int n)
{
    int count;
    if(n == 0) {
        return 0;
    }
    count = 1 + CountDigits(n / 10);
    return count;
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("No. of digits in %d is %d", n, CountDigits(n));
    return 0;
}