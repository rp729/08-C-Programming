#include<stdio.h>

int main(void)
{
    // unsigned character
    unsigned char user_input;

    //Prompt user for input
    printf("Enter a number to shift :");
    fscanf(stdin,"%hhd",&user_input);
    
    //Display final result
    fprintf(stdout,"\nShifting to the right\nNumber >> 5 = %d\n",user_input>>5);

    return 0;
}