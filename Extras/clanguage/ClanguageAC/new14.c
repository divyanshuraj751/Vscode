#include <stdio.h>
int main()
{
    int n, f = 1;
    printf("Enter the number which factorial you want\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        f = f * i;
    }
    printf("%d", f);
}