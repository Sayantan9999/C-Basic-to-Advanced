// Function to check whether a given number contains a given digit or not (TSRS)
int CheckDigit(int n, int digit){
    int i;
    while(n){
        i = (n % 10);
        if(i == digit){
            return 1;
        }else{
            n /= 10;
        }
    }
    return 0;
}
