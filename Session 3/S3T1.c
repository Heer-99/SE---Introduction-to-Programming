#include <stdio.h>

void main()
{
    // Declaring variables
    char productName[] = "HP Laptop";
    float price = 54999.99;
    double rating = 4.7;

    // Printing variables with their data types
    printf("Product Name (String): %s\n", productName);
    printf("Price (Float): %.2f\n", price);
    printf("Rating (Double): %.1lf\n", rating);

}