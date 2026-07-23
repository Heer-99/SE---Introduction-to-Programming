#include <stdio.h>
#include <string.h>

void main()
{
    char team[30];

    printf("Enter your favorite IPL team (MI, CSK, RCB, SRH): ");
    scanf("%s", team);

    if (strcmp(team, "MI") == 0)
    {
        printf("Go Mumbai Indians!");
    }
    else if (strcmp(team, "CSK") == 0)
    {
        printf("Chennai Super Kings for the win!");
    }
    else if (strcmp(team, "RCB") == 0)
    {
        printf("Royal Challengers Bengaluru - Play Bold!");
    }
    else if (strcmp(team, "SRH") == 0)
    {
        printf("Sunrisers Hyderabad - Rise with the Orange Army!");
    }
    else
    {
        printf("Team not found!");
    }

}