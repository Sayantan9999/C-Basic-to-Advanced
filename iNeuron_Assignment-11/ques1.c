// Function to calculate LCM of two numbers (TSRS)
int LCM(int a, int b){
    int max, i;
    max = a > b ? a : b;
    for(i = max; i <= (a * b); i += max){
        if(i % a == 0 && i % b == 0)
        {
            return i;
        }
    }
}