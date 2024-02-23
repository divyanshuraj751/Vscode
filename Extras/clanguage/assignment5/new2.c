/*2. Write a program, which takes two integer operands and one operator form the user, performs 
the operation and then prints the result. (Consider the operators +, -, *, /, %, and use Switch 
Statement).*/

#include <stdio.h>
int main()
{
    int a,b,n,sum,sub,mul,Rem;
    float divide;
    printf("Enter the number a\n");
    scanf("%d", &a);
    printf("Enter the number b\n");
    scanf("%d", &b);
    printf("Enter\n 1.Addition\n 2.Substraction\n 3.Multiplication\n 4.Divide\n 5.Remainder\n");
    scanf("%d", &n); 
    
    switch(n){
    case 1:sum = a + b;
    printf("The sum is %d", &sum);
    break;
    case 2:sub;
    if ( a > b) {
        sub = a - b;
    }
    else {
        sub = b - a;
    }
    printf("The Substraction is %d\n", sub);
    break;
    case 3:mul = a * b;
    printf("The multiplication is %d\n", mul);
    break;
    case 4:divide = a / b;
    printf("The division is %.2f\n", divide);
    break;
    case 5:Rem = a % b;
    printf("The Remainde is %d\n", Rem);
    break;
    default:
    printf("You have entered the wrong input\n");
    }
    return 0;
}