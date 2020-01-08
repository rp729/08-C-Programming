#include<stdio.h>

int main(void){
    int userInput = 0;              //Will store user input
    printf("Enter a character: ");  //Prompts user
    userInput = getchar();          //Stores user input
    printf("Your character was: "); //Preface output
    putchar(userInput);             //Prints output
    printf("\n");                   //New line for clean output

    //Extra
    printf("Size of user input: %d \n", (int)sizeof(userInput));

    return 0;
}