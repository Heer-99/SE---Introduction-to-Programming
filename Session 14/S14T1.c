#include <stdio.h>

void main()
{
    // Store food items
    char items[3][20] = {"Burger", "Pizza", "Fries"};

    // Store item prices
    int prices[3] = {120, 250, 90};

    // Variable to store total price
    int total = 0;

    // Calculate total price
    for (int i = 0; i < 3; i++)
    {
        total += prices[i];
    }

    // Display all items with prices
    printf("Zomato Order\n");
    printf("-------------------------\n");

    for (int i = 0; i < 3; i++)
    {
        printf("%s : Rs.%d\n", items[i], prices[i]);
    }

    printf("-------------------------\n");
    printf("Total price is: Rs.%d\n", total);

}