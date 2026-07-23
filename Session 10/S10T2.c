#include <stdio.h>
#include <string.h>

void main()
{
    // Declare two string variables
    char username1[30];
    char username2[30];

    // Take first username
    printf("Enter First Username : ");
    scanf("%s", username1);

    // Take second username
    printf("Enter Second Username : ");
    scanf("%s", username2);

    // Compare both usernames
    if (strcmp(username1, username2) == 0)
    {
        printf("\nResult : Both usernames are the same.\n");
    }
    else
    {
        printf("\nResult : Usernames are different.\n");
    }

}