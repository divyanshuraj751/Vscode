#include <stdio.h>
int main()
{
    int num;
    for (int i; i; i++)
    {
        printf("Enter a number\n");
        scanf("%d", &num);
        if (num % 7 != 0)
        {
            printf("Not a multiple of seven\n");
            break;
        }
    }
    return 0;
}