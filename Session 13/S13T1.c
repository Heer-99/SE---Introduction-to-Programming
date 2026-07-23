#include <stdio.h>

void main()
{
    // Declare file pointer
    FILE *fp;

    // Open file in write mode
    fp = fopen("playlist.txt", "w");

    if (fp == NULL)
    {
        printf("File cannot be created.");
    }

    // Write songs into the file
    fprintf(fp, "1. Vhalam Aavo Ne\n");
    fprintf(fp, "2. Saavariya\n");
    fprintf(fp, "3. Dhun Laagi\n");

    // Close the file
    fclose(fp);

    printf("Playlist saved successfully in playlist.txt\n");

}