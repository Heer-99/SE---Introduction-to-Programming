#include <stdio.h>

// Function Declaration
void swapPlaylistCounts(int *a, int *b);

void main()
{
    // Number of songs in two playlists
    int playlist1 = 25;
    int playlist2 = 40;

    printf("===== Before Swapping =====\n");
    printf("Playlist 1 Songs : %d\n", playlist1);
    printf("Playlist 2 Songs : %d\n", playlist2);

    // Function Call (Pass Address)
    swapPlaylistCounts(&playlist1, &playlist2);

    printf("\n===== After Swapping =====\n");
    printf("Playlist 1 Songs : %d\n", playlist1);
    printf("Playlist 2 Songs : %d\n", playlist2);

}

// Function Definition
void swapPlaylistCounts(int *a, int *b)
{
    int temp;

    // Swap values
    temp = *a;
    *a = *b;
    *b = temp;
}