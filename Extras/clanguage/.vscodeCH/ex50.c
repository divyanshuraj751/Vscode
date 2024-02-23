#include <stdio.h>
int myfunc(int a, int b)
{
    auto int sum;
    sum = a + b;
    return a + b;
}
int main()
{
    // Declaration - Tellin the compiler about the variable (no space reserved)
    // Definiton - Declaration + space reservation
    int sum = myfunc(3, 5);
    printf("The sum is %d\n", sum);

    return 0;
}