// 1. Write a menu driven program which has following options : 2. Factorial of a number 3. Prime or not 4.
// Odd or even 5. Exit Once a menu item is selected the appropriate action should be taken and once this action
// is finished, the menu should reappear.Unless the user selects the ‘Exit’ option the program should continue to run.

#include <stdio.h>
int main()
{
    int num;
    do {
    printf("Enter\n 1.Factorial of a number\n 2.Check Prime number or not\n 3.Check Odd or even\n 4.Exit\n");
    scanf("%d", &num);

    if (num == 1) {
    int n, f = 1;
    printf("Enter the number which factorial you want\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        f = f * i;
    }
    printf("%d", f);
    }
    else if (num == 2) {
        int num1;
        printf("Enter the number\n");
        scanf("%d", &num1);
        for (int i = 2 ; i<num1 ; i++){
            if (num1 % i == 0)
            {
                printf("Ther number is not prime\n");
                goto end;
            }  
        }
        end :
        printf("The number is prime");
    }
    else if (num == 3) {
        int num1;
        printf("Enter the number\n");
        scanf("%d", &num1);

        if(num1 % 2 == 0) {
        printf("The number is even\n");
        }
        else{
        printf("The number is odd\n");
        }
    }
    else if (num == 4) {
    break;
    }
    }
    while (num != 4);
    return 0;
}