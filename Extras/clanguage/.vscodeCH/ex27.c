#include <stdio.h>
int main()
{
    printf("lets learn about pointers\n");
    int a = 76;
    int *ptra = &a;
    printf("The adress of pointer a is %p\n", &ptra);
    printf("The value of a is %p\n", *ptra);
    return 0;
}