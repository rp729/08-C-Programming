#include<stdio.h>
#include<inttypes.h>
//gcc file.c -lm (links math header)

//Bin function to calculate 1's and 0's
void bin(unsigned n)
{
    //For loop to iterate through binary output
    unsigned i;
    for (i = 1 << 31; i > 0; i >>= 1)
        {
            fprintf(stdout,"%s",(n & i)? "1":"0");
        }
}

//Main function
int main(void)
{
    //Display and receive input
    printf("Enter number to find binary :");
    uint32_t user_input;
    fscanf(stdin,"%d",&user_input);

    //Call on bin function
    bin(user_input);
    printf("\n");

    return 0;
}