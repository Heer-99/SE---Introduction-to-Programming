#include <stdio.h>

void main()
{
    // Outer loop for rows
    for (int i = 1; i <= 4; i++)
    {
        // Inner loop for columns
        for (int j = 1; j <= 4; j++)
        {
            // Print 0 if (row + column) is even
            if ((i + j) % 2 == 0)
            {
                printf("0 ");
            }
            else
            {
                // Print 1 if (row + column) is odd
                printf("1 ");
            }
        }

        // Move to the next row
        printf("\n");
    }

}