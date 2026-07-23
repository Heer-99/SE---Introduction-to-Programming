#include <stdio.h>

void main()
{
    // Declare a variable for the loop
    int i;

    // Display the program title
    printf("=====================================\n");
    printf("         Countdown Timer\n");
    printf("=====================================\n\n");

    // Print numbers from 10 to 1 using a for loop
    for (i = 10; i >= 1; i--)
    {
        printf("%d\n", i);
    }

}