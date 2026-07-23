#include <stdio.h>

void main()
{
    // 2D Array: 3 IPL Matches × 2 Teams
    int cricketScores[3][2] =
    {
        {185, 172},
        {201, 195},
        {168, 176}
    };

    int highest;

    printf("===== Highest Score of Each IPL Match =====\n\n");

    // Traverse each match
    for (int i = 0; i < 3; i++)
    {
        // Assume first team's score is highest
        highest = cricketScores[i][0];

        // Compare with second team's score
        for (int j = 1; j < 2; j++)
        {
            if (cricketScores[i][j] > highest)
            {
                highest = cricketScores[i][j];
            }
        }

        // Print highest score of current match
        printf("Match %d Highest Score : %d\n", i + 1, highest);
    }

}