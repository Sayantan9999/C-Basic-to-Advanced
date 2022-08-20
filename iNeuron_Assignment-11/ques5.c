// Function to print first N prime numbers (TSRN)
void printNPrime(int n){
    int i, x;
    for (x = 2; n != 0; ++x)
    {
        for (i = 2; i < x; ++i)
        {
            if (x % i == 0)
                break;
        }
        if (i == x)
        {
            printf("%d ", x);
            n--;
        }
    }
}