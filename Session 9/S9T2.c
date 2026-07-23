#include <stdio.h>

void main()
{
    // 2D Array: 3 Playlists × 5 Days
    int playlistRatings[3][5] =
    {
        {5, 4, 5, 3, 4},
        {4, 5, 5, 4, 5},
        {3, 4, 4, 5, 4}
    };

    printf("===== Ratings of Second Spotify Playlist =====\n\n");

    // Print ratings of the second playlist
    for (int i = 0; i < 5; i++)
    {
        printf("Day %d : %d\n", i + 1, playlistRatings[1][i]);
    }

}