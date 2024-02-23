#include <stdio.h>

void changevalue(int *address)
{
    *address = 35;
}
int main()
{
    int a =45;
    printf("The value of a is %d\n", a);
    changevalue(&a);
    printf("The new value of a is %d\n", a);
    
    return 0;
} 