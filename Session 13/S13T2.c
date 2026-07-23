#include <stdio.h>

void main()
{
    // Declare file pointer
    FILE *fp;

    // Variable to store one line from the file
    char song[100];

    // Open file in read mode
    fp = fopen("playlist.txt", "r");

    // Check if file exists
    if (fp == NULL)
    {
        printf("File cannot be opened.\n");
    }

    printf("===== Playlist =====\n\n");

    // Read and display each line
    while (fgets(song, sizeof(song), fp) != NULL)
    {
        printf("%s", song);
    }

    // Close the file
    fclose(fp);

}