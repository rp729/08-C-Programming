#include<stdio.h>

int main(void)
{
    //Declare variables
    unsigned num, i, even_odd;

    //Prompt for user input
    printf("Enter a number to find divisibles :");
    fscanf(stdin,"%d",&num);
    printf("Select from the following:\n1) Odd\n2) Even\nResponse :");
    fscanf(stdin,"%d",&even_odd);
    
/*
    //For loop to print all evens and odds
    for (size_t i = 1; i < num; i++)
    {
        //If Else statement 
        if (even_odd == 1 && i % 2 != 0)
        {
            printf("%ld\n",i);
        }
        else if (even_odd == 2 && i % 2 == 0)
        {
            printf("%ld\n",i);
        }
        else
        {
            continue;
        } 
    }
*/  
    //Initialize i
    i = 0;

    //While loop to allow the magic to happen
    while (++i < num)
    {
        //If Else statement 
        if (even_odd == 1 && i % 2 != 0)
        {
            printf("%d\n",i);
        }
        else if (even_odd == 2 && i % 2 == 0)
        {
            printf("%d\n",i);
        }
        else
        {
            continue;
        } 
    }
    
    return 0;
}