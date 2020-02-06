#include<stdio.h>

int main(void)
{
    //Declare vars
    FILE * fp;
    char line = 0;
    fp = fopen("/home/osboxes/CLionProjects/untitled/08-C-Programming/class_pract/file_manipulation/mighty.txt","r");

    //Do this if file doesn't exist
    if (fp == NULL)
    {
        puts("ERROR! Exiting Now!");
        return -1;
    }

    //Read and display characters until you hit the end of the file
    while(line != EOF)
    {
        line = getc(fp);
        putc(line,stdout);
    }
    fclose(fp);
    printf("\n");

    return 0;
}