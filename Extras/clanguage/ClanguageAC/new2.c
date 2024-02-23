#include <stdio.h>
int main(void)
{
    int n;
    printf("Enter the number\n");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}