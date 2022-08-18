int factorial(int n)
{
    if(n <= 0)
    {
        return 1;
    }
    return factorial(n) * n;
}
// the bug is that in the return, the first n should be n-1.

