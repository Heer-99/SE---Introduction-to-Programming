#include <stdio.h>

void main()
{
    // Entry-Controlled Loop (while loop)
    int number = 5;

    printf("Entry-Controlled Loop (while):\n");

    while (number < 5)
    {
        printf("Number = %d\n", number);
        number++;
    }

    printf("\n");

    // Exit-Controlled Loop (do-while loop)
    int value = 5;

    printf("Exit-Controlled Loop (do-while):\n");

    do
    {
        printf("Value = %d\n", value);
        value++;
    }
    while (value < 5);
}