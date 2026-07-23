#include <stdio.h>
#include <string.h>   // Required for strlen()

void main()
{
    // Declare and initialize a string
    char songTitle[] = "Tum Hi Ho";

    // Calculate string length
    int length = strlen(songTitle);

    // Display output
    printf("===== Song Information =====\n\n");
    printf("Song Title   : %s\n", songTitle);
    printf("Title Length : %d\n", length);

}