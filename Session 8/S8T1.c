#include <stdio.h>
#include <string.h>

// Function Declaration
char* getUserInitials(char name[])
{
    static char initials[3];

    // Take first letter of first name
    initials[0] = name[0];

    // Find first letter after space
    for (int i = 0; name[i] != '\0'; i++)
    {
        if (name[i] == ' ')
        {
            initials[1] = name[i + 1];
            break;
        }
    }

    // End the string
    initials[2] = '\0';

    return initials;
}

void main()
{
    char name[50];
    char *result;

    // Get full name from user
    printf("Enter your favorite cricketer's full name: ");
    scanf(" %[^\n]", name);

    // Function Call
    result = getUserInitials(name);

    // Display Result
    printf("\nInitials: %s\n", result);

}