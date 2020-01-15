/*
Name: Reuben Perry
Date 15 Jan 20
Project: Char Replacement
*/

#include<stdio.h>

//Declare function prior to use
int swapparu(char *string,const char swap_this,const char with_this);

int main(void)
{
    //Declare and initialize variables prior to swapping
    char a = 'a';
    char b = 'b';
    char pointers[12];

    //Prompt user for input
    printf("Enter a string of which will swap 'a' with 'b' :");
    fscanf(stdin,"%s",pointers);
    printf("You entered %s\n",pointers);

    //Run the swap function
    swapparu(pointers,a,b);
    printf("Your new string is %s\n",pointers);

    return 0;
}

//Define the swap function
int swapparu(char *string,const char swap_this,const char with_this)
{
    //Pointers can work as an int and char which is why syntax looks different. Pointer starts at 0.
    for (; *string; string++)
    {
        if (*string == swap_this)
        {
            //This is where the magic happens
            *string = with_this;
        }
        
    }
}