/*If cost price and selling price of an item are input through the keyboard, write a program to
determine whether the seller has made profit or incurred loss. Also determine how much profit
he made or loss he incurred*/

#include <stdio.h>
int main()
{
    float selling_price, cost_price, profit, loss;

    printf("Enter the cost price of an item\n");
    scanf("%f", &cost_price);

    printf("Enter the selling price of that item\n");
    scanf("%f", &selling_price);

    if (selling_price > cost_price)
    {
        profit = selling_price - cost_price;
        printf("You made a profit of %.2f\n", profit);
    }
    else
    {
        loss = cost_price - selling_price;
        printf("You made a loss of %.2f\n", loss);
    }
    return 0;
}