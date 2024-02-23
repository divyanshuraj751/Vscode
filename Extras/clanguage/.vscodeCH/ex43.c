#include <stdio.h>
int main()
{
    typedef int *intPointer;
    intPointer a, b;
    int c = 45;
    a = &c;
    b = &c;
}