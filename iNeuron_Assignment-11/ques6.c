// Function to print all Prime numbers between two given numbers (TSRN)
void printPrime(int a, int b){
    int i, j, max, min;
    max = a > b ? a : b;
    min = a < b ? a : b;
    for(i = min + 1 ; i < max ; ++i){
        for(j = 2; j < i; ++j){
            if(i % j == 0){
                break;
            }
        }
        if(j == i){
            printf("%d ", i);
        }
    }
}