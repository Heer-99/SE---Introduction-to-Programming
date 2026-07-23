#include <stdio.h>

// Function Declaration
void increaseFollowersByValue(int followers);
void increaseFollowersByReference(int *followers);

void main()
{
    // Original followers count
    int followers = 5000;

    printf("Original Followers = %d\n", followers);

    // Pass By Value
    increaseFollowersByValue(followers);

    printf("\nFollowers After Pass By Value = %d\n", followers);

    // Pass By Reference
    increaseFollowersByReference(&followers);

    printf("\nFollowers After Pass By Reference = %d\n", followers);

}

// Function Definition (Pass By Value)
void increaseFollowersByValue(int followers)
{
    followers = followers + 1000;

    printf("\nInside Pass By Value Function = %d\n", followers);
}

// Function Definition (Pass By Reference)
void increaseFollowersByReference(int *followers)
{
    *followers = *followers + 1000;

    printf("\nInside Pass By Reference Function = %d\n", *followers);
}