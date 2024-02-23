#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);

    switch (age)
    {
        case 5:
        printf("The age is 5\n");
        break;

        case 10:
        printf("The age is 10\n");
        break;

        case 15:
        printf("The age is 15\n");
        break;

    default:
    printf("Your age doesnot match");

    }
    return 0;
}