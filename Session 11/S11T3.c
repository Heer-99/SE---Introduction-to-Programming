#include <stdio.h>

void main()
{
    // Array of Zomato order amounts
    int orderAmounts[5] = {250, 320, 180, 450, 290};

    // Pointer declaration
    int *ptr;

    // Pointer points to first element of array
    ptr = orderAmounts;

    printf("===== Zomato Order Details =====\n\n");

    // Traverse array using pointer
    for (int i = 0; i < 5; i++)
    {
        printf("Order %d Amount : %d\n", i + 1, *ptr);
        printf("Memory Address  : %p\n\n", ptr);

        // Move pointer to next element
        ptr++;
    }

}