// Function to print N odd natural numbers (TSRN)
void printOddNaturalNum(int n){
    int i;
    for(i = 1; i <= n; ++i){
        printf("%d ", (2 * i) - 1);
    }
}