#include <stdio.h>

void main()
{
    int musicMinutes[7] = {0};
    int choice, i;
    char confirm;
    FILE *fp;

    do
    {
        printf("\n========== Music Listening Logger ==========\n");
        printf("1. Log Listening Minutes\n");
        printf("2. View Weekly Summary\n");
        printf("3. Reset Weekly Data\n");
        printf("4. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:

                fp = fopen("music_log.txt", "w");

                if (fp == NULL)
                {
                    printf("\nUnable to create file.\n");
                    break;
                }

                printf("\nEnter music listening minutes for 7 days:\n");

                for (i = 0; i < 7; i++)
                {
                    printf("Day %d: ", i + 1);
                    scanf("%d", &musicMinutes[i]);

                    fprintf(fp, "%d\n", musicMinutes[i]);
                }

                fclose(fp);

                printf("\nListening minutes saved successfully.\n");

                break;

            case 2:

                printf("\n========== Weekly Summary ==========\n");

                for (i = 0; i < 7; i++)
                {
                    printf("Day %d : %d minutes\n", i + 1, musicMinutes[i]);
                }

                break;

            case 3:

                printf("\nAre you sure you want to reset all weekly data? (Y/N): ");
                scanf(" %c", &confirm);

                if (confirm == 'Y' || confirm == 'y')
                {
                    for (i = 0; i < 7; i++)
                    {
                        musicMinutes[i] = 0;
                    }

                    fp = fopen("music_log.txt", "w");

                    if (fp != NULL)
                    {
                        fclose(fp);
                    }

                    printf("\nWeekly data has been reset successfully.\n");
                }
                else
                {
                    printf("\nReset operation cancelled.\n");
                }

                break;

            case 4:

                printf("\nThank You for Using Music Listening Logger.\n");

                break;

            default:

                printf("\nInvalid Choice! Please Enter a Valid Option.\n");
        }

    } while (choice != 4);

}