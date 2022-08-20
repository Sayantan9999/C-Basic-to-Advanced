// Program in C to find the sum of the series 1 ! / 1 + 2 ! / 2 + 3 ! / 3 + 4 ! / 4 + 5 ! / 5 using the function.
#include <stdio.h>
int fact(int);
int main(){
    int i, sum = 0;
    for(i = 1; i <= 5; ++i){
        sum += fact(i)/i;
    }
    printf("%d", sum);
    return 0;
}
int fact(int n){
    int f = 1, i;
    for(i = 1; i <= n; ++i){
        f *= i;
    }
    return f;
}