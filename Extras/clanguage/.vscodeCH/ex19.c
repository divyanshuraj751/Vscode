#include <stdio.h>
int main()
{
    int num, i;
    printf("Enter the number which multiplication table you want\n");
    scanf("%d", &num);

    printf("The multiplication table of %d are as follow\n", num);

    for(i = 1; i < 11; i++)
    {
        printf("%d X %d = %d\n" ,num , i, num*i);
    }
    return 0;
}
