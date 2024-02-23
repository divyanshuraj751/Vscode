#include <stdio.h>
#include <math.h>
void printTable(float n);
int main()
{
    float n;
    printf("Enter the number\n");
    scanf("%f", &n);

    printTable(n);
    return 0;
}

void printTable(float n)
{
  printf("The square is %f",pow(n,2));
}