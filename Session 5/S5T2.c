#include <stdio.h>

void main()
{
    int meal;

    printf("=====================================\n");
    printf("     Zomato Food Suggestion Tool\n");
    printf("=====================================\n");

    printf("1. Breakfast\n");
    printf("2. Lunch\n");
    printf("3. Dinner\n");
    printf("4. Snack\n");

    printf("\nEnter your preferred meal (1-4): ");
    scanf("%d", &meal);

    switch (meal)
    {
        case 1:
            printf("\nSuggested Dish: Dosa");
            break;

        case 2:
            printf("\nSuggested Dish: Gujarati Thali");
            break;

        case 3:
            printf("\nSuggested Dish: Paneer Butter Masala");
            break;

        case 4:
            printf("\nSuggested Dish: Grilled Sandwich");
            break;

        default:
            printf("\nTry some fruits!");
    }

}