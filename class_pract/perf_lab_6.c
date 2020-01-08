#include<stdio.h>

int main(void){
    int userInput = 0;
    printf("Enter a character: ");
    userInput = getc(stdin);
    printf("\n");

    printf("Current character :");
    putc(userInput,stdout);
    printf("\nPrevious character :");
    putc(userInput -1,stdout);
    printf("\n");

    return 0;
}