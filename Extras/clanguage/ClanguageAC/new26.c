#include <stdio.h>
int fact(int n);
int main()
{
    printf("The factorial is %d", fact(5));
    return 0;
}

int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    int factnm1 = fact(n - 1);
    int fact = factnm1 * n;
    return fact;
}