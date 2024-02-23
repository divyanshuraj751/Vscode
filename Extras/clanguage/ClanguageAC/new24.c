#include <stdio.h>
#define PI 3.14

void areasquare();
void arearectangle();
void areacircle();

int main()
{
    int shape,square,rectangle,circle;
    printf("Enter the shape (1.square 2.circle 3.rectangle)\n");
    scanf("%d", &shape);
    if (shape == 1)
    {
    areasquare();
    }
    else if (shape == 2)
    {
    arearectangle();
    }
    else if (shape == 3)
    {
    areacircle();
    }
    else 
    {
    printf("You have entered the wrong input\n");
    }
    return 0;
}

void areasquare()
{
    int a;
    printf("Enter the side of square\n");
    scanf("%d", &a);
    printf("The area of square is %d", a*a);
}

void arearectangle()
{
    int l, b;
    printf("Enter the length of rectangle\n");
    scanf("%d", &l);
    printf("Enter the breadth of rectangle\n");
    scanf("%d", &b);
    printf("The area of the rectangle is %d",l*b);
}

void areacircle()
{
    float r;
    printf("Enter the radius of the circle\n");
    scanf("%f", &r);
    printf("The area of circle is %.2f",PI*r*r);
}
