#include<stdio.h>

//Declare function
int read_file(FILE * file_to_read);

int main(void)
{
    //Declare variables used
    FILE * fp;
    FILE * fp2;
    char line = 0;
    fp = fopen("/home/osboxes/CLionProjects/untitled/08-C-Programming/class_pract/file_manipulation/mighty.txt","r");
    fp2 = fopen("/home/osboxes/CLionProjects/untitled/08-C-Programming/class_pract/file_manipulation/mighty2.txt","w");

    //If file doesnt exist do this
    if (fp == NULL)
    {
        puts("ERROR! Exiting Now!");
        return -1;
    }

    //read and write to files
    while(line != EOF)
    {
        line = getc(fp);
        putc(line,fp2);
    }
    fclose(fp);
    fclose(fp2);

    //Run function declared
    read_file(fopen("/home/osboxes/CLionProjects/untitled/08-C-Programming/class_pract/file_manipulation/mighty2.txt","r"));


    return 0;
}

//Initialize function
int read_file(FILE * file_to_read)
{
    //declare and initialize line
    char line = 0;

    //if statement comment that nobody will read
    if (file_to_read == NULL)
    {
        puts("ERROR! Exiting Now!");
        return -1;
    }

    //Keep going while not at the end of file and read this beach
    while(line != EOF)
    {
        line = getc(file_to_read);
        putc(line,stdout);
    }
    fclose(file_to_read);
    printf("\n");

    return 0;
}
