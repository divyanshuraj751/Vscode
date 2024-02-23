#include <stdio.h>
int main()
{
    int n;
    do
    {
        printf("Enter number\n");
        scanf("%d", &n);
        printf("%d\n", n);

        if (n % 2 != 0)
        {
            break;
        }
    } while (1);
    printf("You have entered a odd number");
    return 0;
}