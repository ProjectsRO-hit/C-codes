#include <stdio.h>

struct gungame
{
    int shots;
    int accuracy;
    int wins;
    int loss;
};

struct gungame comparePlayers(struct gungame player[2])
{
    int score_player1 = player[0].shots + player[0].accuracy + player[0].wins - player[0].loss;
    int score_player2 = player[1].shots + player[1].accuracy + player[1].wins - player[1].loss;

    if (score_player1 > score_player2)
    {
        return player[0];
    }
    else
    {
        return player[1];
    }
}

int main()
{
    printf("          ** Welcome to gun game **            \n");
    struct gungame player[2];
    struct gungame *ptr1, *ptr2;

    ptr1 = &player[0];
    ptr2 = &player[1];

    printf("Please Enter details of Player 1\n");
    printf("Please input the shots fired by player 1: ");
    scanf("%d", &ptr1->shots);
    printf("Please input the accuracy of player 1: ");
    scanf("%d", &ptr1->accuracy);
    printf("Please input the wins of player 1: ");
    scanf("%d", &ptr1->wins);
    printf("Please input the losses of player 1: ");
    scanf("%d", &ptr1->loss);

    printf("\n");

    printf("Please Enter details of Player 2\n");
    printf("Please input the shots fired by player 2: ");
    scanf("%d", &ptr2->shots);
    printf("Please input the accuracy of player 2: ");
    scanf("%d", &ptr2->accuracy);
    printf("Please input the wins of player 2: ");
    scanf("%d", &ptr2->wins);
    printf("Please input the losses of player 2: ");
    scanf("%d", &ptr2->loss);

    struct gungame winningPlayer = comparePlayers(player);

    printf("Player with better overall stats: Shots=%d Accuracy=%d Wins=%d Loss=%d\n", 
           winningPlayer.shots, winningPlayer.accuracy, winningPlayer.wins, winningPlayer.loss);

    return 0;
}