#include <stdio.h>

int fib(int n);
int main()
{
    printf("%d", fib(n));
    return 0;
}
int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    int fibnm1 = fib(n - 1);
    int fibnm2 = fib(n - 2);
    int fibn = fibnm1 + fibnm2;
    printf("fib of %d id %d", n, fibn);
    return fibn;
}