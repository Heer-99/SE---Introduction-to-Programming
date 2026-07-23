#include <stdio.h>

// Function Declaration
float calculateAverage(int orders[], int size);

void main()
{
    // 7 days Zomato order amounts
    int dailyOrders[7] = {250, 180, 320, 150, 400, 350, 200};

    float average;

    // Function Call
    average = calculateAverage(dailyOrders, 7);

    printf("===== Weekly Zomato Report =====\n\n");

    printf("Average Weekly Spend = ₹%.2f\n", average);

}

// Function Definition
float calculateAverage(int orders[], int size)
{
    int sum = 0;

    // Calculate total amount
    for (int i = 0; i < size; i++)
    {
        sum = sum + orders[i];
    }

    // Return average
    return (float)sum / size;
}