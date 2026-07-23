#include <stdio.h>
#include <string.h>

void main()
{
    // Declare strings
    char fullName[50];
    char userName[6];

    // Take user input
    printf("Enter Your Full Name : ");
    scanf("%s", fullName);

    // Check the length of the name
    if (strlen(fullName) >= 5)
    {
        // Copy only first 5 characters
        strncpy(userName, fullName, 5);

        // Add null character at the end
        userName[5] = '\0';
    }
    else
    {
        // Copy complete name
        strcpy(userName, fullName);
    }

    // Display generated username
    printf("\nGenerated Username : %s\n", userName);

}