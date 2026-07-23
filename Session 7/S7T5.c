#include <stdio.h>

void main()
{
    // Declare variable
    int rows;

    // Get the number of rows from the user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Outer loop for rows
    for (int i = 1; i <= rows; i++)
    {
        // Print leading spaces
        for (int j = 1; j <= rows - i; j++)
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