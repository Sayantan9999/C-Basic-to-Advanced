// Function to find the next prime number of a given number (TSRS)
int NextPrime(int n){
    int i, j;
    for(i = n + 1; i < n + 7; ++i){
        for(j = 2; j < i; ++j){
            if(i % j == 0)
            break;
        }
        if(j == i)
        return i;
    }
}
int main(){
    int n;
    scanf("%d", &n);
    printf("%d", NextPrime(n));
    return 0;
}