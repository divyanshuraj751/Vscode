#include <stdio.h>
int main()
{
    int num;
    for (int i; i; i++)
    {
        printf("Enter the input number\n");
        scanf("%d", &num);
        if (num % 2 != 0)
        {
            printf("The number is odd number\n");
            break;
        }
    }
    return 0;
}