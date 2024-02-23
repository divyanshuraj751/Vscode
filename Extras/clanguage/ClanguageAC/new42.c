#include <stdio.h>
int main()
{
    int price[3];
    printf("Enter the price of first product\n");
    scanf("%d", &price[0]);
    printf("Enter the price of second product\n");
    scanf("%d", &price[1]);
    printf("Enter the price of third product\n");
    scanf("%d", &price[2]);

    int sum = price[0] + price[1] + price[2];
    float total = sum + sum*0.18;

    printf("The final cost is %.2f", total);
    return 0;
}