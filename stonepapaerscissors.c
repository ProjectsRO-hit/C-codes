#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int stonepaperscissor(char you, char computer)
{
    if (you == computer) // draw case
    {
        return 0;
    }

    /* Cases covered:-
    sp
    ps
    px
    xp
    xs
    sx
    draw case*/

    if ((you == 's' && computer == 'p') || (you == 'p' && computer == 'x') || (you == 'x' && computer == 's'))
    {
        return -1;
    }
    else if ((you == 'p' && computer == 's') || (you == 'x' && computer == 'p') || (you == 's' && computer == 'x'))
    {
        return 1;
    }
}

int main()
{
    char you, computer;
    int games, count = 0;
    int compwin = 0, userwin = 0, draw = 0;

    printf("****** Welcome to Stone, Paper Scissor Game ******\n");
    printf("Press '1' to play a single game, '3' to play three rounds and '5' to play five rounds.\n");
    scanf("%d", &games);

    while (count < games)
    {
        int number;
        srand(time(0));
        number = rand() % 3 + 1; // generates random number between 1 to 3

        if (number == 1)
        {
            computer = 's';
        }
        else if (number == 2)
        {
            computer = 'p';
        }
        else
        {
            computer = 'x';
        }

        do
        {
            printf("Please input 's' to select stone, 'p' for paper, 'x' for Scissors\n");
            scanf(" %c", &you);

            if (you != 's' && you != 'p' && you != 'x')
            {
                printf("Error!! Invalid input. Please try again.\n");
            }

        } while (you != 's' && you != 'p' && you != 'x');

        int results = stonepaperscissor(you, computer);

        printf("You chose: %c and the computer chose: %c\n", you, computer);

        if (results == 1)
        {
            printf("Congratulations! You won.\n");
            userwin++;
        }
        else if (results == -1)
        {
            printf("You lose! Better luck next time.\n");
            compwin++;
        }
        else
        {
            printf("Draw!\n");
            draw++;
        }
        count++;
    }

    printf("Total games: %d, User wins: %d, Computer wins: %d, Draw: %d\n", games, userwin, compwin, draw);

    return 0;
}
