#include <stdio.h>

int main(void)
{
    char buff[10];                      // Will store string
    printf("Enter string: ");            // Prompts user
    fgets(buff, sizeof(buff), stdin);    // Stores user string
    printf("Your string was: ");         // Prefaces output
    fputs(buff,stdout);                          // Writes to stdout

    return 0;
}
