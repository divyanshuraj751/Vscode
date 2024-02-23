/*Any integer is input through the keyboard. Write a program to find out whether it is an odd 
number or even number*/


#include <stdio.h>

int main()
{
    int num, num1;
    printf("Enter an integer\n");
    scanf("%d", num);

    num1 = num % 2;

    if (num1 == 0 )
    {
        printf("The integer is even\n", num1);
    }
    else 
    {
        printf("The integer is odd\n", num1);
    }
    return 0;
}