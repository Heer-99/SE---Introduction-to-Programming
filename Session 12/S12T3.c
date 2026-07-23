#include <stdio.h>

// Structure for Time
struct Time
{
    int hours;
    int minutes;
};

// Structure for Movie Show
struct MovieShow
{
    char movie[30];
    int screen;
    struct Time showTime;
};

void main()
{
    // Initialize Movie Show Details
    struct MovieShow show = {"State of Ramadhani", 2, {7, 30}};

    printf("===== BookMyShow Movie Details =====\n\n");

    printf("Movie  : %s\n", show.movie);
    printf("Screen : %d\n", show.screen);
    printf("Time   : %02d:%02d\n", show.showTime.hours, show.showTime.minutes);

}