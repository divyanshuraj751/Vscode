#include <stdio.h>

float convert(float n);

int main()
{
    float n;
    printf("Enter the temperature in celsius\n");
    scanf("%f", &n);

    printf("The Temperature in fahrenheit is %.2f", convert(n));
    return 0;
}

float convert(float n)
{
    float f;
    f = (n * 9.0/5.0) + 32;
    return f;
}