#include <stdio.h>
#define STR1    "string1"
#define STR2    "string2"
#define STR3    STR1 STR2
#define BUFFER  64

int main(void)
{
    char new_array[BUFFER] = {STR3};
    printf("Your array is :%s\n",new_array);

    return 0;
}
