#include<stdio.h>
#include<string.h> //strtok https://www.codingame.com/playgrounds/14213/how-to-play-with-stribreakngs-in-c/string-split


int main(void)
{
    //Declare string 
    char string[128];

    //Rretrieve user input
    printf("Enter sum stuff :");
    fscanf(stdin,"%s",string);

    //delimeter is a space
    char delim[] = " ";
    char ptr = strtok(string, delim);


    return 0;
}
