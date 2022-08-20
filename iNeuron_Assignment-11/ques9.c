// Program to calculate square of any number using Function
#include <stdio.h>
int SqrOfNum(int);
int main(){
    int n, s;
    printf("Enter a number: ");
    scanf("%d", &n);
    s = SqrOfNum(n);
    printf("%d is the sqaure of %d", s, n);
    return 0;
}
int SqrOfNum(int n){
    return (n * n);
}