#include <stdio.h>
int main()
{
    float a, b, c, d, e;
    int num;
    printf("Enter a five digit number\n");
    scanf("%.f", num);
    e = num - num / 100000;
    d = num - num / 10000;
    c = num - num / 1000;
    b = num - num / 100;
    a = num - num / 10;
    printf("The sum of digits is %.0f", a + b + c + d + e);
    return 0;
}