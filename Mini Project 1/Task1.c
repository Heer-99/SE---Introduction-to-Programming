#include <stdio.h>

void main()
{
    // Array to store music listening minutes for 7 days
    int musicMinutes[7];

    // Input music listening minutes
    printf("===== Music Listening Logger =====\n\n");

    for (int i = 0; i < 7; i++)
    {
        printf("Enter music listening minutes for Day %d: ", i + 1);
        scanf("%d", &musicMinutes[i]);
    }

    // Display weekly music listening minutes
    printf("\n===== Weekly Music Listening Data =====\n");

    for (int i = 0; i < 7; i++)
    {
        printf("Day %d : %d minutes\n", i + 1, musicMinutes[i]);
    }

}