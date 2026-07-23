#include <stdio.h>

void main()
{
    float cartAmount, discount = 0, finalAmount;

    printf("=====================================\n");
    printf("     Flipkart Discount Calculator\n");
    printf("=====================================\n");

    printf("Enter Total Cart Amount: ");
    scanf("%f", &cartAmount);

    if (cartAmount > 1000)
    {
        if (cartAmount > 2000)
        {
            discount = cartAmount * 0.20;
        }
        else
        {
            discount = cartAmount * 0.10;
        }
    }
    else
    {
        discount = 0;
    }

    finalAmount = cartAmount - discount;

    printf("\nTotal Cart Amount : %.2f", cartAmount);
    printf("\nDiscount Applied  : %.2f", discount);
    printf("\nFinal Amount      : %.2f", finalAmount);

}