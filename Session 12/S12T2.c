#include <stdio.h>

// Structure Declaration
struct FoodItem
{
    char itemName[30];
    float price;
    float rating;
};

void main()
{
    // Structure Array Initialization
    struct FoodItem menu[3] =
    {
        {"Masala Dosa", 120.00, 4.6},
        {"Paneer Butter Masala", 280.00, 4.8},
        {"Grilled Sandwich", 150.00, 4.5}
    };

    printf("===== Zomato Menu =====\n\n");

    // Display all food items using loop
    for (int i = 0; i < 3; i++)
    {
        printf("Food Item %d\n", i + 1);
        printf("Item Name : %s\n", menu[i].itemName);
        printf("Price     : Rs. %.2f\n", menu[i].price);
        printf("Rating    : %.1f\n\n", menu[i].rating);
    }

}