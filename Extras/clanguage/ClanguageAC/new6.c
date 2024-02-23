#include <stdio.h>
int main()
{
    int num, sum = 0;
    printf("Enter the number which you want to sum\n");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        sum = sum + i;
    }
    printf("The sum is %d\n", sum);

    for (int i = num; i>=1; --i)
    {
        printf("%d\n", i);
    }
    return 0;
}