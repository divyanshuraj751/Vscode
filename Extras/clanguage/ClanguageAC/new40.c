/*Write a function to calculate the sum, product & average of two numbers.
Print that average in main function*/

#include <stdio.h>
void dowork(int a, int b, int *sum, int *product, int *avg);

int main()
{
    int a = 2, b = 6;
    int sum, product, avg;
    dowork(a, b ,&sum, &product,&avg);
    printf("sum = %d, product = %d, avg = %d\n",sum, product, avg);
    return 0;
}

void dowork(int a, int b, int *sum, int *product, int *avg)
{
    *sum = a + b;
    *product = a * b;
    *avg = (a + b) / 2;
}
