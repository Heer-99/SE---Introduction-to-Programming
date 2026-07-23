#include <stdio.h>

// Function to format followers count
void formatFollowersCount(int count)
{
    // Check if followers are 10 lakh or more
    if (count >= 1000000)
    {
        printf("%.1fM\n", count / 1000000.0);
    }
    // Check if followers are 1 thousand or more
    else if (count >= 1000)
    {
        printf("%.1fK\n", count / 1000.0);
    }
    // Print the original number if less than 1000
    else
    {
        printf("%d\n", count);
    }
}

void main()
{
    // Display formatted follower counts
    printf("Followers: ");
    formatFollowersCount(1500);

    printf("Followers: ");
    formatFollowersCount(1200000);

    printf("Followers: ");
    formatFollowersCount(950);

}