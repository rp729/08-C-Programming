#include<stdio.h>

int main(void)
{
    // unsigned character
    unsigned char user_input;

    printf("Enter a number to shift \nMost left bit must be on :");
    fscanf(stdin,"%hhd",&user_input);
    
    fprintf(stdout,"\nShifting to the left\nNumber << 3 = %d\n",user_input<<3);

    return 0;
}