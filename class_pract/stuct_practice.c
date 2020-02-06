#include <stdio.h>

/*
1. Change the source code below so that another member is added to the player structure, a float value indicating hours played.
Fix up the rest of the code so taht the new value is input and displayed.
*/

int main()
{
    struct player
    {
        char name[32];
        int highscore;
        float hrs_played;
    };

    struct player xbox;
    struct player player2;

    printf("Enter the first player's name: ");
    scanf("%s",xbox.name);
    printf("Enter the high score for %s: ",xbox.name);
    scanf("%d",&xbox.highscore);
    printf("Enter the numbers of hours played for %s: ",xbox.name);
    scanf("%f",&xbox.hrs_played);

    printf("Enter the second player's name: ");
    scanf("%s",player2.name);
    printf("Enter the high score for %s: ",player2.name);
    scanf("%d",&player2.highscore);
    printf("Enter the numbers of hours played for %s: ",player2.name);
    scanf("%f",&player2.hrs_played);

    printf("Player %s has a high score of %d and played %.2f hours.\n",
            xbox.name,xbox.highscore,xbox.hrs_played);

    printf("Player %s has a high score of %d and played %.2f hours.\n",
            player2.name,player2.highscore,player2.hrs_played);

    return(0);
}