#include <stdio.h>

int main()
{
    int marks[3];
    printf("Enter marks in physics\n");
    scanf("%d", &marks[0]);
    printf("Enter marks in chemistry\n");
    scanf("%d", &marks[1]);
    printf("Enter marks in math\n");
    scanf("%d", &marks[2]);

    printf("Physics = %d,chemistry = %d,Math = %d",marks[0], marks[1], marks[2]);
    return 0;
}