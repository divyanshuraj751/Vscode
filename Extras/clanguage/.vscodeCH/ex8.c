#include <stdio.h>

int main()
{
    int age, marks;

    printf("Enter your age\n");
    scanf("%d", &age);

    printf("Enter your marks\n");
    scanf("%d", &marks);

    switch (age)
    {
        case 1:
        printf("Your age is 3\n");

          switch (marks)
          {
          case 4:
          printf("you are passed\n");
          break;
          
          default:
          printf("You are failed\n");
          }
        break;

        case 2:
        printf("Your age is 15\n");
        break;

        case 3:
        printf("Your age is 20\n");
        break;

        default:
        printf("Your age doesnot match\n");

    }
    return 0;
}