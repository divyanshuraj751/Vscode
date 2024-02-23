/* Write a function that receives marks received by a student in 3 subjects and returns the average 
and percentage of these marks. Call this function from main( ) and print the results in main( ).*/

#include <stdio.h>

float func(int s1, int s2, int s3);

int main()
{
   int s1,s2,s3;
   printf("Enter the marks in three subjects\n");
   scanf("%d%d%d", &s1,&s2,&s3);

   func(s1,s2,s3);
   return 0;
}
float func(int s1, int s2, int s3) {
    int sum = s1 + s2 + s3;
    float avg = sum / 3;
    printf("The average is %.2f\n", avg);
    printf("The percentage marks id %.2f\n", avg);
    return avg
}
