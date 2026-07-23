#include <stdio.h>

void main()
{
    // Constant variable for GST rate
    const float GST_RATE = 18.0;

    // Variables
    float basePrice = 500.00;
    float gstAmount, finalPrice;

    // Calculations
    gstAmount = (basePrice * GST_RATE) / 100;
    finalPrice = basePrice + gstAmount;

    // Output
    printf("Zomato Order Details\n");
    printf("-----------------------------\n");
    printf("Base Price : %.2f\n", basePrice);
    printf("GST Rate   : %.2f%%\n", GST_RATE);
    printf("GST Amount : %.2f\n", gstAmount);
    printf("Final Price: %.2f\n", finalPrice);

}