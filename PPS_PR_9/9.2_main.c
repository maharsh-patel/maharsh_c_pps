#include <stdio.h>

// Define the structure Game
struct Game {
    char playerName[50];
    char teamName[50];
    int maxScore;
};

int main() {
    // Declare an array of 3 Game structures
    struct Game Player[3];

    // Read information for 3 players
    for (int i = 0; i < 3; i++) {
        printf("Enter details for player %d:\n", i + 1);
        printf("Player Name: ");
        scanf("%s", Player[i].playerName);
        printf("Team Name: ");
        scanf("%s", Player[i].teamName);
        printf("Maximum Score: ");
        scanf("%d", &Player[i].maxScore);
        printf("\n");
    }

    // Print table header
    printf("\n%-15s %-20s %-15s\n", "Player Name", "Team Name", "Max Score");
    printf("---------------------------------------------\n");

    // Print team-wise player information in a table format
    for (int i = 0; i < 3; i++) {
        printf("%-15s %-20s %-15d\n", Player[i].playerName, Player[i].teamName, Player[i].maxScore);
    }

    return 0;
}

