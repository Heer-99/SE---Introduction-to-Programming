#include <stdio.h>
#include <string.h>

void main()
{
    // Declare variables
    int choice = 0;
    char newTeam[30];

    // Keep displaying the menu until the user chooses Exit
    while (choice != 3)
    {
        // Display menu
        printf("\n=====================================\n");
        printf("         IPL Team Menu\n");
        printf("=====================================\n");
        printf("1. View Favorite IPL Teams\n");
        printf("2. Add New Team\n");
        printf("3. Exit\n");

        // Get user's choice
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        // Perform action based on user's choice
        switch (choice)
        {
            case 1:
                printf("\nMy Favorite IPL Teams:\n");
                printf("1. Mumbai Indians\n");
                printf("2. Royal Challengers Bengaluru\n");
                printf("3. Sunrisers Hyderabad\n");
                break;

            case 2:
                printf("\nEnter New IPL Team: ");
                scanf(" %[^\n]", newTeam);

                printf("Team \"%s\" added successfully!\n", newTeam);
                break;

            case 3:
                printf("\nThank you for using the IPL Team Menu!\n");
                break;

            default:
                printf("\nInvalid Choice! Please try again.\n");
        }
    }

}