/*Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all the three
points fall on one straight line*/

#include <stdio.h>
int main()
{
    int x1, x2, x3, y1, y2, y3, area1;
    int m1, m2, m3;
    float area2;
    printf("Enter the point (x1,y1)\n");
    scanf("%d%d", &x1,&y2);

    printf("Enter the point (x2,y2)\n");
    scanf("%d%d", &x2,&y2);

    printf("Enter the point (x3,y3)\n");
    scanf("%d%d", &x3,&y3);

    m1 = y2 - y3;
    m2 = y3 - y1;
    m3 = y1 - y2;

    area1 = x1*(m1) + x2*(m2) + x3*(m3);
    area2 = area1/2;

    if (area2 == 0)
    {
        printf("The three points lie on straight line\n");
    } 
    else 
    {
        printf("The three points doesnot lie on straight line\n");
    }
    return 0;
}