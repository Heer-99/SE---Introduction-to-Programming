#include <stdio.h>
#include <string.h>

void main()
{
    FILE *fp;
    char song[100];

    // Open file in read mode
    fp = fopen("playlist.txt", "r");

    if (fp == NULL)
    {
        printf("File cannot be opened.\n");
    }

    printf("Songs containing 'Love':\n\n");

    // Read each line and check for the word "Love"
    while (fgets(song, sizeof(song), fp) != NULL)
    {
        if (strstr(song, "Love") != NULL || strstr(song, "love") != NULL)
        {
            printf("%s", song);
        }
    }

    // Close file
    fclose(fp);

}