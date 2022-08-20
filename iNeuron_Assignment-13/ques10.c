// Program to calculate power of any number using recursion
#include <stdio.h>
int PowerOfN(int n, int power) 
{
    int result;
    if(power == 0){
        return 1;
    }
    result = n * PowerOfN(n, power - 1);
    return result;
}
int main()
{
    int n, p;
    printf("Enter a number for which you want to calculate power: ");
    scanf("%d", &n);
    printf("Enter power: ");
    scanf("%d", &p);
    printf("%d^%d = %d", n, p, PowerOfN(n, p));
    return 0;
}