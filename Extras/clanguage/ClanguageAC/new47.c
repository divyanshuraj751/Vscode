#include <stdio.h>

int main()
{
    //2 X 3
    int marks[2][3];
    marks[0][0] = 84;
    marks[0][1] = 54;
    marks[0][2] = 87;

    marks[1][0] = 78;
    marks[1][1] = 98;
    marks[1][2] = 76;

    printf("%d", marks[0][0]);
    return 0;
}