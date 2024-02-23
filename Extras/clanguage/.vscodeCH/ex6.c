#include <stdio.h>

int main()
{
    int subject, science, math ,both, none;

    printf("Enter your subject\n for science:- 1\n for math:- 2\n for both:- 3\n or none\n");
    scanf("%d", &subject);

    printf("You have entered %d as your subject\n", subject);

    if(subject=1)
    {
        printf("You got 15 points\n");
    }
    else if(subject=2)
    {
        printf("You got 15 points\n");
    }
    else if(subject=3)
    {
        printf("You got 45 points\n");
    }
    else
    {
        printf("You got 0 points\n");
    }

    return 0;
}