#include <stdio.h>

void main()
{
    // Declare and initialize a 1D array with 7 days step count
    int dailySteps[7] = {6500, 7200, 8100, 9000, 7600, 10500, 8800};

    // Array of day names
    char *days[7] = {
        "Monday",
        "Tuesday",
        "Wednesday",
        "Thursday",
        "Friday",
        "Saturday",
        "Sunday"
    };

    printf("===== Weekly Step Count =====\n\n");

    // Print all step counts using a loop
    for (int i = 0; i < 7; i++)
    {
        printf("%-10s : %d Steps\n", days[i], dailySteps[i]);
    }

}