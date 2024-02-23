#include <stdio.h>
int main()
{
    int Physics, Chemistry, Mathematics, Computer, English, Total_marks;
    float percentage, First_division, Second_division, Third_division;

    printf("Enter the marks of Physics\n");
    scanf("%d", &Physics); 

    printf("Enter the marks of Chemistry\n");
    scanf("%d", &Chemistry);

    printf("Enter the marks of Mathematics\n");
    scanf("%d", &Mathematics);

    printf("Enter the marks of Computer\n");
    scanf("%d", &Computer);

    printf("Enter the marks in English\n");
    scanf("%d", &English);

    Total_marks = Physics + Chemistry + Mathematics + Computer + English;
    percentage = (Total_marks) / 5;

    printf("The aggregate percntage is %.2f\n", percentage);

    if (percentage >= 60)
    {
        printf("You got First Division\n");
    }
    else if (percentage > 50)
    {
        printf("You got Second Division\n");
    }
    else if (percentage > 40)
    {
        printf("You got Third Division\n");
    }
    else
    {
        printf("You got Failed\n");
    }
    return 0;
}