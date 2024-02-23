/*Given the length and breadth of a rectangle, write a program to find whether the area of the
rectangle is greater than its perimeter*/

#include <stdio.h>
int main()
{
    float length, breadth, area, perimeter;

    printf("Enter the length of the rectangle\n");
    scanf("%f", &length);

    printf("Enter the breadth of the rectangle\n");
    scanf("%f", &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);
    printf("The area of rectangle is %.2f\n", area);
    printf("The perimeter of the rectangle is %.2f\n", perimeter);
    if (area > perimeter)
    {
        printf("The area of rectangle is greater than its perimeter\n");
    }
    else
    {
        printf("The perimeter of rectangle is greater than its area\n");
    }
    return 0;
}