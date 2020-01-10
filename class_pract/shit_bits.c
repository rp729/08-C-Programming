#include<stdio.h>
//gcc file.c -lm (links math header)

/*
#define SCNu32 "lu"
decimal scanf format for uint32_t
*/

int main(void)
{
    // unsigned character
    unsigned char user_input;
    unsigned char a = 1;

    printf("Enter a number to shift \nMost left bit must be on :");
    fscanf(stdin,"%hhd",&user_input);

    if (user_input & (1<<a))
    {
        fprintf(stdout,"\nShifting to the right\nNumber >> 1 = %d\n",user_input>>1);
    }

    else
    {
        printf("First bit is not shifted to the left.\n");
    }

    return 0;
}