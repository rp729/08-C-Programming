#include <stdio.h>

int main(void){

    //Declare and initialize string
    char char_array [256] = {0};

    char_array[0] = 80; // P
    char_array[1] = 101; // e
    char_array[2] = 114; // r
    char_array[3] = 114; // r
    char_array[4] = 121; // y

    //Null terminate
    char_array[5] = '\0'; // \0

    //Display results
    printf("My favorite word is %s\n",char_array);
    printf("Terminator is at index 5 __%c \n",char_array[5]);
    printf("The size of my array is %ld \n",sizeof(char_array));

    return 0;
}
