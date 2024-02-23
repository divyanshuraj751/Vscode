#include <stdio.h>

void printTable(int n);

int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d", &n);

    printTable(n);

    return 0;
}

void printTable(int n)
{
    for(int i = 1; i<=10; i++)
    {
    printf("%d X %d = %d\n", n, i, i*n);
    }
}