#include<stdio.h>

int main(void)
{
    //initialize char array to 0
    char user_input[10] = {0};

    //Prompt for user input
    printf("Insert number between 32 and 126 :");
    fgets(user_input,sizeof(user_input),stdin);

    //If statement to meet condition
    if (user_input[0] > 32 && user_input[0] < 126)
    {
        printf("Meets the criteria! (insert thumbs up emoji here)\n");
        printf("Your character is :%c\n",user_input[0]);
    }

    //Tell the user they failed if the input is incorrect
    else
    {
        printf("FAIL!\n");
    }
    
    
}