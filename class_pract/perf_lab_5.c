#include<stdio.h>

int main(void){

    //This is where the magic happens...
    int userInput = 0;              //Will store user input
    printf("Enter a character: ");  //Prompts user
    userInput = getchar();          //Stores user input
    printf("Your character was: "); //Preface output
    putchar(userInput);
    printf("\n");
    printf("\n");                   //Prints output
    printf("The next character is: "); //Preface output
    putchar(userInput + 1);         //Prints output
    printf("\n");                   //New line for clean output

    //Extra
    printf("Size of user input: %d \n", (int)sizeof(userInput));

    return 0;
}