#include <stdio.h>
int main()
{
    float price = 100.00;
    float *ptr = &price;
    float **pptr = &ptr;

    printf("*ptr = %f\n",*ptr);
    printf("**pptr = %f",&ptr);
    return 0;
}