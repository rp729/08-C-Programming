//WILL NOT WORK ON WINDOWS

#include<stdio.h>

int main(void)
{
    //Declare variables used
    FILE * fp;
    char * line = NULL;
    size_t len = 0;
    size_t read;

    //Initialize fp
    fp = fopen("/home/osboxes/CLionProjects/untitled/08-C-Programming/class_pract/file_manipulation/mighty.txt","r");

    //if file doesnt exist then tell the user they're an idiot
    if (fp == NULL)
    {
        puts("ERROR opening file!");
        return -1;
    }

    //getline(&pointer,&size,file);
    while ((read = getline(&line,&len,fp)) != -1)
    {
        printf("LENGTH OF LINE %lu:\n",read);
        printf("%s\n",line);
    }

    //Close out this beach
    fclose(fp);

    return 0;    
}