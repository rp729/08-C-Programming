#include<stdio.h>

int main(void)
{
    char my_string[] = "This\nis\na\nstring\0";
    puts(my_string);
    printf("\n");

    int index = 0;

    while (my_string[index] != 10 && my_string[index] != 0)
    {
        printf("%c",my_string[index]);
        index ++;
    }
    printf("\n");
    return 0;
}