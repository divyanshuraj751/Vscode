#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);

    if (num % 2 == 0 || num % 3 == 0 || num % 5 == 0 || num % 7 == 0 || num % 11 == 0 || num % 13 == 0)
    {
    printf("The number is a not prime number\n");
    }
    else if ( num == 1 || num == 0)
    {
        printf("The number is not a prime number\n");
    }

    else 
    {
        printf("The number is a prime number\n");
    }
    return 0;
}
