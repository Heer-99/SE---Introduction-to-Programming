#include <stdio.h>

void main()
{
    // Print all even numbers from 1 to 10
    for (int i = 1; i <= 10; i++)
    {
        // Check whether the number is even
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }

}