#include<stdio.h>
int main()
{
    int n,a,b,c,d,e,reversed_num=0;

    printf("Enter a 5 digit number:");
    scanf("%d",&n);

    e=n%10;
    reversed_num=reversed_num+e*10000;

    d=(n/10)%10;
    reversed_num=reversed_num+d*1000;

    c=(n/100)%10;
    reversed_num=reversed_num+c*100;

    b=(n/1000)%10;
    reversed_num=reversed_num+b*10;

    a=(n/10000);
    reversed_num=reversed_num+a*1;

    printf("The reversed number is:%d",reversed_num);
    
    return 0;
}