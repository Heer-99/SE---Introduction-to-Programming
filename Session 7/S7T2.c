#include <stdio.h>

void main()
{
    // Outer loop for rows
    for (int i = 1; i <= 5; i++)
    {
        // Inner loop for printing numbers
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }

        // Move to the next line after each row
        printf("\n");
    }

}