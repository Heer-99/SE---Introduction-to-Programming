#include <stdio.h>

void main()
{
    // Variable Declarations
    char playlistName[] = "Bollywood Hits";
    int totalSongs = 25;
    float averageDuration = 3.8;

    // Printing all values in a single formatted sentence
    printf("My favorite Spotify playlist is \"%s\", which contains %d songs with an average duration of %.1f minutes per song.\n",
           playlistName, totalSongs, averageDuration);


}