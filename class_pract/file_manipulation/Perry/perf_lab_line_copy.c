//WILL NOT WORK ON WINDOWS

#include<stdio.h>

//Declare function to be used later
int read_file_by_line(FILE * fp);

int main(void)
{
    //Declare variables used
    FILE * fp;
    FILE * fp2;
    char * line = NULL;
    size_t len = 0;
    size_t read;

    //Initialize fp and fp2
    fp = fopen("/home/osboxes/CLionProjects/untitled/08-C-Programming/class_pract/file_manipulation/mighty.txt","r");
    fp2 = fopen("/home/osboxes/CLionProjects/untitled/08-C-Programming/class_pract/file_manipulation/mighty2.txt","w");

    //If file doesn't exist that do dis
    if (fp == NULL)
    {
        puts("ERROR opening file!");
        return -1;
    }

    //getline(&pointer,&size,file);
    while ((read = getline(&line,&len,fp)) != -1)
    {
        fprintf(fp2,"%s",line);
    }

    //Close out the files
    fclose(fp);
    fclose(fp2);

    //Run the function declared
    read_file_by_line(fopen("/home/osboxes/CLionProjects/untitled/08-C-Programming/class_pract/file_manipulation/mighty2.txt","r"));
    
    return 0;    
}

//Initialize function declared and used in main
int read_file_by_line(FILE * fp)
{
    //Declare vars used
    char * line = NULL;
    size_t len = 0;
    size_t read;

    //Tell the user to screw off if file doesn't exist
    if (fp == NULL)
    {
        puts("ERROR opening file!");
        return -1;
    }

    //getline(&pointer,&size,file);
    while ((read = getline(&line,&len,fp)) != -1)
    {
        printf("%s",line);
    }

    //new line for cleaner output
    printf("\n");

    //Close out this beach
    fclose(fp);

    return 0;   
}