#include <stdio.h>
#include <string.h>

// Function Declaration
void addToCart(char cart[][50], int *count, char product[])
{
    // Copy product into cart
    strcpy(cart[*count], product);

    // Increase cart item count
    (*count)++;

    // Display updated cart
    printf("\n----- Updated Shopping Cart -----\n");

    for (int i = 0; i < *count; i++)
    {
        printf("%d. %s\n", i + 1, cart[i]);
    }
}

void main()
{
    // Shopping cart can store 10 products
    char cart[10][50];

    // Product count
    int count = 0;

    // Product name
    char product[50];

    // User input
    printf("Enter Product Name: ");
    scanf(" %[^\n]", product);

    // Function Call
    addToCart(cart, &count, product);

    // Print cart again to show changes remain
    printf("\n----- Cart After Function Call -----\n");

    for (int i = 0; i < count; i++)
    {
        printf("%d. %s\n", i + 1, cart[i]);
    }

}