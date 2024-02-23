#include <stdio.h>
int main()
{
    int rectangle, circle, geometrical_shape;
    float area, perimeter, radius, length, breadth, circumference;

    printf("Enter the geometrical shape you want\n 1.Rectangle\n 2.Circle\n");
    scanf("%d", &geometrical_shape);

    switch (geometrical_shape)
    {
    case 1:
        printf("You have chosen Rectangle as your shape\n");
        printf("Enter the length of rectangle\n");
        scanf("%f", &length);
        printf("Enter the breadth of rectangle\n", breadth);
        scanf("%f", &breadth);
        area = length * breadth;
        perimeter = 2 * (length + breadth);
        printf("The area of rectangle is %.2f\nand perimeter of rectangle is %.2f\n", area, perimeter);
        break;
    case 2:
        printf("You have chosen circle as your shape\n");
        printf("Enter the radius of circle\n");
        scanf("%f", &radius);
        area = 3.14 * radius * radius;
        circumference = 2 * 3.14 * radius;
        printf("The area of circle is %.2f\nand circumference of circle is %.2f\n", area, circumference);
        break;

    default:
        printf("You have entered the wrong input\n");
    }
    return 0;
}