#include <stdio.h>

// Structure Declaration
struct Playlist
{
    char title[30];
    char artist[30];
    int duration;
};

void main()
{
    // Structure Variable Initialization
    struct Playlist song = {"Vhalam Aavo Ne", "Jigardan Gadhavi", 270};

    printf("===== Playlist Details =====\n\n");

    // Print Playlist Details
    printf("Song Title : %s\n", song.title);
    printf("Artist     : %s\n", song.artist);
    printf("Duration   : %d Seconds\n", song.duration);

}