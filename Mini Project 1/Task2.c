#include <stdio.h>

void main()
{
    int musicMinutes[7];
    int choice, i;

    do
    {
        printf("\n===== Music Listening Logger =====\n");
        printf("1. Log Listening Minutes\n");
        printf("2. View Weekly Summary\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:

                printf("\nEnter music listening minutes for 7 days:\n");

                for (i = 0; i < 7; i++)
                {
                    printf("Day %d: ", i + 1);
                    scanf("%d", &musicMinutes[i]);
                }

                printf("\nListening minutes saved successfully.\n");

                break;

            case 2:

                printf("\n===== Weekly Summary =====\n");

                for (i = 0; i < 7; i++)
                {
                    printf("Day %d : %d minutes\n", i + 1, musicMinutes[i]);
                }

                break;

            case 3:

                printf("\nThank You for Using Music Listening Logger.\n");

                break;

            default:

                printf("\nInvalid Choice! Please Try Again.\n");
        }

    } while (choice != 3);

    
}