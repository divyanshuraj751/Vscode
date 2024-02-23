#include <stdio.h>
int main()
{
    int a;
    printf("Enter distance in kms\n");
    scanf("%d", &a);

    printf("The distance in meter is %dm", a*1000);

    return 0;
}