#include <Stdio.h>
// int b = 34;
int func1(int b1)
{
    static int myvar = 90;
    printf("The value of myvar is %d\n", myvar);
    myvar++;
    return b1 * +myvar;
}
int main()
{
    int b = 455;
    int val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    int *ptr = &val;
    return 0;
}