#include<stdio.h>
#include<string.h> // used for string token

int clear_file(FILE * fp);
int name_to_file(FILE * fp);
int read_file(FILE * file_to_read);

int main(void)
{
    //Declare variables
    FILE * fp;
    FILE * fp2;
    FILE * fp3;
    fp = fopen("/home/osboxes/CLionProjects/untitled/08-C-Programming/class_pract/file_manipulation/usernames.txt","a");
    fp2 = fopen("/home/osboxes/CLionProjects/untitled/08-C-Programming/class_pract/file_manipulation/usernames.txt","w");
    fp3 = fopen("/home/osboxes/CLionProjects/untitled/08-C-Programming/class_pract/file_manipulation/usernames.txt","r");
    clear_file(fp2);
    name_to_file(fp);
    read_file(fp3);

    return 0;
}

int name_to_file(FILE * fp)
{
    //Declare user input and pointer 
    char user_input[1024];
    char *ptr[256];

    //delimeter is a space and other stuff
    char delim[] = " \t\r\n\v\f";

    //Declare and initialize variable for indexing
    int i = 0;

    //Prompt user for input
    printf("Enter name of student :");
    fgets(user_input,sizeof(user_input),stdin);

    //Initialize ptr as string token
    ptr[i]=strtok(user_input,delim);

    //While loop to find delimeters identified.
    while (ptr[i] != NULL)
    if (i == 2)
    {
        fprintf(fp,"%s\n",ptr[i]);
        i++;
        ptr[i] = strtok(NULL,delim);
    }
    else
    {
        fprintf(fp,"%c",ptr[i][0]);
        i++;
        ptr[i] = strtok(NULL,delim);
    }
    fclose(fp);

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


    return 0;
}

int clear_file(FILE * fp)
{
    fclose(fp);

    return 0;
}

