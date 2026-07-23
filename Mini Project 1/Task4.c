#include <stdio.h>

void main()
{
    FILE *fp;
    int musicMinutes[7];
    int i;
    int total = 0;
    int highest;
    float average;

    // Open file in read mode
    fp = fopen("music_log.txt", "r");

    if (fp == NULL)
    {
        
        printf("File not found.\n");
        
    }

    // Read data from file
    for (i = 0; i < 7; i++)
    {
        fscanf(fp, "%d", &musicMinutes[i]);
    }

    fclose(fp);

    // Calculate total and highest
    highest = musicMinutes[0];

    for (i = 0; i < 7; i++)
    {
        total = total + musicMinutes[i];

        if (musicMinutes[i] > highest)
        {
            highest = musicMinutes[i];
        }
    }

    // Calculate average
    average = total / 7.0;

    // Display weekly report
    printf("\n===== Weekly Music Listening Report =====\n");

    printf("Total Listening Minutes   : %d\n", total);
    printf("Average Listening Minutes: %.2f\n", average);
    printf("Highest Listening Minutes: %d\n", highest);

}