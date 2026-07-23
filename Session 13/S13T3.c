#include <stdio.h>

void main()
{
    // Declare file pointer
    FILE *fp;

    // Open file in append mode
    fp = fopen("playlist.txt", "a");

    // Check if file is opened
    if (fp == NULL)
    {
        printf("File cannot be opened.\n");
    }

    // Add two new songs
    fprintf(fp, "4. Khalasi\n");
    fprintf(fp, "5. Chaand Ne Kaho\n");

    // Close the file
    fclose(fp);

    printf("Two songs added successfully to playlist.txt\n");

}