// Function to calculate the number of combinations one can make from n items
// and r selected at a time.(TSRS)
int Factorial(int x);
int SelectionOfElements(int n, int r)
{
    int i = n - r, p;
    int n_fact, r_fact, i_fact;
    n_fact = Factorial(n);
    r_fact = Factorial(r);
    i_fact = Factorial(i);
    p = (r_fact * i_fact);
    return (n_fact / p);
}
