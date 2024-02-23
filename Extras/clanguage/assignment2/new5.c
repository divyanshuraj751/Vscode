/*Write a program to check whether a triangle is valid or not, when the three angles of the 
triangle are entered through the keyboard*/

#include <stdio.h>
int main()
{
    int first_angle,second_angle,third_angle,sum;
    printf("Enter the first angle of triangle\n");
    scanf("%d", &first_angle);

    printf("Enter the second angle of triangle\n");
    scanf("%d", &second_angle);

    printf("Enter the third angle of triangle\n");
    scanf("%d", &third_angle);

    sum = first_angle + second_angle + third_angle;
    printf("The sum of all angles of triangle is %d\n", sum);
    
    if (sum == 180)
    {
        printf("The triangle is valid\n");
    }
    else 
    {
        printf("The triangle is not valid\n");
    }
    return 0;
}