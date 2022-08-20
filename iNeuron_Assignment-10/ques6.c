// Function to calculate factorial of a number (TSRS)
int Factorial(int n){
    int f = 1, i;
    for(i = 1; i <= n; ++i){
        f = f * i;
    }
    return f;
}