#include <stdio.h>

void main()
{
    // Declare an integer variable
    int likes = 250;

    // Declare a pointer variable
    int *ptrLikes;

    // Store the address of likes in the pointer
    ptrLikes = &likes;

    printf("===== Pointer Example =====\n\n");

    // Print the value of likes
    printf("Likes Value            : %d\n", likes);

    // Print the address of likes
    printf("Address of Likes       : %p\n", &likes);

    // Print the address stored in pointer
    printf("Pointer Stores Address : %p\n", ptrLikes);

    // Print the value using pointer
    printf("Value Using Pointer    : %d\n", *ptrLikes);

}