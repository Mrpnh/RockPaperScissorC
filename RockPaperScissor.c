// Rock-Paper-Scissor

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int guessRandom(int n)
{
    srand(time(NULL));
    return rand() % n;
}

/*
Computer

Rock = 0
Scissor=1
paper=2

*/
int main()
{
    int playerScore = 0, computerScore = 0, count = 3, playerChoice;
    char playerName[20];
    printf("Enter the name of the player\n");
    gets(playerName);
    while (count > 0)
    {
        printf("%s's turn...\n", playerName);
        printf("Rock=1, paper=2 or scissors=3\n");
        scanf("%d", &playerChoice);
        getchar();
        int computerChoice = guessRandom(3);
        if (playerChoice >= 1 && playerChoice <= 3)
        {
            if (playerChoice == 1 && computerChoice == 1)
            {
                printf("%s Wins...\n", playerName);
                playerScore++;
                count--;
            }
            else if (playerChoice == 2 && computerChoice == 0)
            {
                printf("%s Wins...\n", playerName);
                playerScore++;
                count--;
            }
            else if (playerChoice == 3 && computerChoice == 2)
            {
                printf("%s Wins...\n", playerName);
                playerScore++;
                count--;
            }
            else if (playerChoice == 1 && computerChoice == 2)
            {
                printf("Computer Wins...\n");
                computerScore++;
                count--;
            }
            else if (playerChoice == 2 && computerChoice == 1)
            {
                printf("Computer Wins...\n");
                computerScore++;
                count--;
            }
            else if (playerChoice == 3 && computerChoice == 0)
            {
                printf("Computer Wins...\n");
                computerScore++;
                count--;
            }
            else
            {
                printf("Round Tied\n");
                count--;
            }
        }
        else
        {
            printf("Please enter a valid number...\n", playerName);
            continue;
        }
    }
    if (computerScore > playerScore)
    {
        printf("%s Wins.", playerName);
    }
    else if (playerScore > computerScore)
    {
        printf("Computer Wins.\n");
    }
    else
    {
        printf("Game Tied\n");
    }
    return 0;
}