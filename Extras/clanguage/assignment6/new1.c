/*Write a function that receives 5 integers and returns the sum, average and standard deviation of
these numbers. Call this function from main( ) and print the results in main( ).*/

#include <stdio.h>
#include <math.h>
float func(int n1, int n2, int n3, int n4, int n5);

int main()
{
    int n1, n2, n3, n4, n5;
    printf("Enter five integer\n");
    scanf("%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5);

    func(n1, n2, n3, n4, n5);
    return 0;
}

float func(int n1, int n2, int n3, int n4, int n5)
{
    int s = n1 + n2 + n3 + n4 + n5;
    printf("The sum is %d\n", s);
    float avg = s / 5;
    printf("The average is %.2f\n", avg);

    int sum = (n1 - avg) * (n1 - avg) + (n2 - avg) * (n2 - avg) + (n3 - avg) * (n3 - avg) + 
    (n4 - avg) * (n4 - avg) + (n5 - avg) * (n5 - avg);

    double res = sum / 4;
    double stddev = sqrt(res);
    
    printf("The standard deviation is %.2lf", stddev);
    return stddev;
}
