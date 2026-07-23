#include <stdio.h>

// Function Declaration
void incrementFollowers(int *followers, int n);

void main()
{
    // Instagram followers of 5 friends
    int followers[5] = {1000, 2500, 1800, 3200, 1500};

    printf("===== Followers Before Increment =====\n");

    // Print original followers
    for (int i = 0; i < 5; i++)
    {
        printf("Friend %d : %d\n", i + 1, followers[i]);
    }

    // Function Call
    incrementFollowers(followers, 5);

    printf("\n===== Followers After Increment =====\n");

    // Print updated followers
    for (int i = 0; i < 5; i++)
    {
        printf("Friend %d : %d\n", i + 1, followers[i]);
    }

}

// Function Definition
void incrementFollowers(int *followers, int n)
{
    // Increase each follower count by 100
    for (int i = 0; i < n; i++)
    {
        *followers = *followers + 100;

        // Move pointer to next array element
        followers++;
    }
}