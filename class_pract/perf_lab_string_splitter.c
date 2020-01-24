#include<stdio.h>
#include<string.h> //strtok https://www.codingame.com/playgrounds/14213/how-to-play-with-stribreakngs-in-c/string-split


int main(void)
{
    //Declare string 
    char string[128];

    //Rretrieve user input
    printf("Enter sum stuff :");
    fscanf(stdin,"%s",string);

    //Get the length of the string
    int str_size = strlen(string);

    //delimeter is a space
    char delim[] = " ";

    int i = 0;
    char *ptr[i] = strtok(string, delim);

    for (size_t i = 0; i < str_size; i++)
    {
        printf("%s",ptr[i]);
    }
    

/*
    while (ptr != NULL)
    {
        printf("%s\n",ptr);
        ptr = strtok(NULL,delim);
    }  

*/

    return 0;
}
