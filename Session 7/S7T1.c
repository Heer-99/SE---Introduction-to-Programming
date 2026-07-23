#include <stdio.h>

void main()
{
    // Outer loop for rows
    for (int i = 1; i <= 5; i++)
    {
        // Inner loop for columns
        for (int j = 1; j <= 5; j++)
        {
            printf("* ");
        }

        // Move to the next row
        printf("\n");
    }

}