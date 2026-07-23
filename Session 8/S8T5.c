#include <stdio.h>

// Function Declaration
void capitalizeFirstLetter(char str[]);

void main()
{
    // Product Name
    char productName[] = "hp laptop";

    // User Name
    char userName[] = "Princy";

    printf("===== Formatted Output =====\n\n");

    printf("Product Name : ");
    capitalizeFirstLetter(productName);

    printf("User Name    : ");
    capitalizeFirstLetter(userName);

}

// Function Definition
void capitalizeFirstLetter(char str[])
{
    // Convert first character to uppercase
    if (str[0] >= 'a' && str[0] <= 'z')
    {
        str[0] = str[0] - 32;
    }

    // Print formatted string
    printf("%s\n", str);
}