#include <stdio.h>
int main()
{
    int a = 345;
    float b = 5.7;
    void *ptr;
    ptr = &b;
    printf("The value of b is %f\n",*((float *)ptr));
    ptr = &a;
    printf("The value of a is %d\n",*((int *)ptr));
    return 0;
}