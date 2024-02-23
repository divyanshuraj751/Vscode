#include <stdio.h>
int main()
{
    int Physics, Chemistry, Computer, Mathematics, English, Total_marks;
    float percentage_marks;
    printf("Enter the marks of subject out of 100\n");
    printf("Enter the marks in Physics\n");
    scanf("%d", &Physics);
    printf("Enter the marks in Chemistry\n");
    scanf("%d", &Chemistry);
    printf("Enter the marks in Computer\n");
    scanf("%d", &Computer);
    printf("Enter the marks in Mathematics\n");
    scanf("%d", &Mathematics);
    printf("Enter the marks in English\n");
    scanf("%d", &English);

    Total_marks = Physics + Chemistry + Computer + Mathematics + English;
    printf("Total marks = %d\n", Total_marks);
    percentage_marks = (Total_marks*100)/500;

    printf("You got %0.2f percent marks\n", percentage_marks);
    return 0;
}