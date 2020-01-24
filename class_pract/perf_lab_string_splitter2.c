#include<stdio.h>
#include<string.h> //strtok https://www.codingame.com/playgrounds/14213/how-to-play-with-stribreakngs-in-c/string-split


int main(void)
{
    //Declare user input and pointer 
    char user_input[1024];
    char *ptr[256];

    //delimeter is a space and other stuff
    char delim[] = " \t\r\n\v\f";

    //Declare and initialize variable for indexing
    int i = 0;

    //Prompt user for input
    printf("Enter sum stuff :");
    fgets(user_input,sizeof(user_input),stdin);

    //Initialize ptr as string token
    ptr[i]=strtok(user_input,delim);

    //While loop to find delimeters identified.
    while (ptr[i] != NULL)
    {
        printf("string [%d]=%s\n",i,ptr[i]);
        i++;
        ptr[i] = strtok(NULL,delim);
    }
    

    return 0;
}
