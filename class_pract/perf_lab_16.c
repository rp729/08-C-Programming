#include<stdio.h>

int main(void)
{
    //Initialize and declare string array
    char my_string[] = "This\nis\na\nstring\0";

    //test string array with puts per perf lab instructions
    puts(my_string);
    printf("\n");

    //Used to index during while loop
    int index = 0;

    while (my_string[index] != 10 && my_string[index] != 0)
    {
        printf("%c",my_string[index]);
        index ++;
    }

    printf("\n");
    return 0;
}