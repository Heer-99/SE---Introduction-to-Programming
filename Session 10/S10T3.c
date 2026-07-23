#include <stdio.h>
#include <string.h>

void main()
{
    // Source string
    char source[] = "Flipkart";

    // Destination string
    char shoppingApp[20];

    // Copy source string into shoppingApp
    strcpy(shoppingApp, source);

    // Display output
    printf("===== Shopping Application =====\n\n");
    printf("Original String : %s\n", source);
    printf("Copied String   : %s\n", shoppingApp);

}