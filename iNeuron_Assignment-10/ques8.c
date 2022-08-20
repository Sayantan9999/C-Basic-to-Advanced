// Function to calculate the number of arrangements one can make from n items
// and r selected at a time.(TSRS)
int Factorial(int n);
int ArrangementOfElements(int n, int r){
    int n_fact, i_fact;
    n_fact = Factorial(n);
    i_fact = Factorial(n - r);
    return (n_fact / i_fact);
}
