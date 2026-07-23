#include <stdio.h>

void main()
{
    int age;

    printf("=====================================\n");
    printf("      Eligibility Checker\n");
    printf("=====================================\n");

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("\nEligible for Driving License");

        if (age >= 21)
        {
            printf("\nEligible for Credit Card");

            if (age >= 25)
            {
                printf("\nEligible for Car Rental");
            }
        }
    }
    else
    {
        printf("\nNot eligible for Driving License");
    }

}