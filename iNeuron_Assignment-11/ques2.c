// Function to calculate HCF of two numbers (TSRS)
int HCF(int a, int b){
    int i, min;
    min = a < b ? a : b;
    for(i = min; i > 0; --i){
        if(a % i == 0 && b % i == 0){
            return i;
        }
    }
}