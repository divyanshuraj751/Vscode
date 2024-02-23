#include <stdio.h>

float percent(float sum);
int main()
{
    int sum;
    int science,math,sanskrit;
    printf("Enter the marks in Science\n");
    scanf("%d", &science);
    printf("Enter the marks in Mathematics\n");
    scanf("%d", &math);
    printf("Enter the marks in Sanskrit\n");
    scanf("%d", &sanskrit);

    sum = science + math + sanskrit;
    
    printf("The percentage of student is %.2f",percent(sum));
    return 0;
}
float percent(float sum)
{
    float percent = sum/3;
    return percent;
}