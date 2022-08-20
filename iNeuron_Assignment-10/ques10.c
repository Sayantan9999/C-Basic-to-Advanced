// Function to print all prime factors of a given number (TSRN)
void printPrimeFactors(int n){
    int i, factors;
    for(factors = 2; n > 1; ++factors){
        if(n % factors == 0){
            n /= factors;
            for(i = 2; i < factors; ++i){
                if(factors % i == 0)
                break;
            }
            if(i == factors){
                printf("%d ", factors);
                factors = 1;
            }
        }
    }
}