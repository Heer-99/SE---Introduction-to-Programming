#include <stdio.h>
#include <string.h>

void main()
{
    // Declare variables
    char guess[50];

    // Store the correct song name
    char song[] = "Saavariya";

    // Display the program title
    printf("=====================================\n");
    printf("        Guess the Song Game\n");
    printf("=====================================\n");

    // Display available songs
    printf("\nAvailable Songs:\n");
    printf("1. Vhalam Aavo Ne\n");
    printf("2. Saavariya\n");
    printf("3. Dhun Laagi\n");

    // Keep asking until the correct song is guessed
    do
    {
        printf("\nGuess the song: ");
        scanf(" %[^\n]", guess);

        // Compare the guessed song with the correct song
        if (strcmp(guess, song) == 0)
        {
            printf("\nCorrect! You guessed the song.\n");
        }
        else
        {
            printf("\nWrong guess! Please try again.\n");
        }

    } while (strcmp(guess, song) != 0);

}