// Function to print first N terms of Fibonacci series (TSRN)
void Nfibonacci(int n){
    int a = -1, b = 1, s = 0;
    int i;
    for(i = 1; i <= n; ++i){
        s = a + b;
        a = b;
        b = s;
        printf("%d ", s);
    }
}