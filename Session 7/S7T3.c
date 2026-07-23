#include <stdio.h>

void main()
{
    // Outer loop for rows
    for (int i = 1; i <= 6; i++)
    {
        // Print leading spaces
        for (int j = 1; j <= 6 - i; j++)
        {
            printf(" ");
        }

        // Print stars
        for (int k = 1; k <= (2 * i - 1); k++)
        {
            printf("*");
        }

        // Move to the next line
        printf("\n");
    }

}