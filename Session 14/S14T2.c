#include <stdio.h>

// Function to check whether a number is even or odd
int isEven(int num)
{
    // Check if the number is divisible by 2
    if (num % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void main()
{
    int number = 10;

    // Call the function and store the result
    int result = isEven(number);

    // Display the result
    if (result == 1)
    {
        printf("%d is an Even Number.\n", number);
    }
    else
    {
        printf("%d is an Odd Number.\n", number);
    }

}