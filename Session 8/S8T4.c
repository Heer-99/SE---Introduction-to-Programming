#include <stdio.h>

// Function Declaration
void formatPrice(int price);

void main()
{
    // Display prices of three products
    printf("Flipkart Product Prices\n");
    printf("------------------------\n");

    formatPrice(1599);
    formatPrice(24999);
    formatPrice(799);

}

// Function Definition
void formatPrice(int price)
{
    if (price >= 1000 && price <= 9999)
    {
        printf("₹%d,%03d\n", price / 1000, price % 1000);
    }
    else if (price >= 10000 && price <= 99999)
    {
        printf("₹%d,%03d\n", price / 1000, price % 1000);
    }
    else
    {
        printf("₹%d\n", price);
    }
}