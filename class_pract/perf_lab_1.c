#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    // u_int32_t
    u_int32_t user_input;

    //Prompt user for input
    printf("Enter a number to shift :");
    fscanf(stdin,"%d",&user_input);
    
    //Display final result
    fprintf(stdout,"\nShifting to the left\nNumber << 3 = %d\n",user_input<<3);

    return 0;
}