/*If the ages of Ram, Shyam and Ajay are input through the keyboard, write a program to
determine the youngest of the three*/

#include <stdio.h>
int main()
{
    int Ram, Shyam, Ajay;
    printf("Enter the ages of Ram,Shyam,Ajay.(Note the age should not be same)\n");
    printf("Enter the age of Ram\n");
    scanf("%d", &Ram);

    printf("Enter the age of Shyam\n");
    scanf("%d", &Shyam);

    printf("Enter the age of Ajay\n");
    scanf("%d", &Ajay);

    if (Ram < Shyam && Ram < Ajay)
    {
        printf("Ram is youngest of three\n");
    }
    else if (Shyam < Ram && Shyam < Ajay)
    {
        printf("Shyam is youngest of three\n");
    }
    else if (Ajay < Ram && Ajay < Shyam)
    {
        printf("Ajay is youngest of three\n");
    }
    else
    {
        printf("You have given wrong input\n");
    }
    return 0;
}
