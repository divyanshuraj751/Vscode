#include <stdio.h>
int func1(int b) //This is a global variable since it is declrared outside main()
{
    printf("The address of b inside func1 is %d\n", &b);
    return b * 10;
}
int main()
{
    int b = 567;
    printf("The address of b inside main is %d\n", &b);
    int val = func1(b);
    int *ptr = &val;
    printf("The value of func1 is %d", val);
    return 0;
}