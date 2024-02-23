#include <stdio.h>

int sum(int a, int b);
int main()
{
    int a, b;
    printf("Enter the first number\n");
    scanf("%d", &a);
    printf("Enter the second number\n");
    scanf("%d", &b);

    int s = sum(a, b);
    return 0;
}

int sum(int a, int b)
{
    printf("The sum is %d",a + b);
    return a + b;
}