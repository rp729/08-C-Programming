#include <stdio.h>

int main(void){

    //Declare and initialize string
    char char_array [9] = {0};
    
    char_array[0] = 84; //P
    char_array[1] = 115; //e
    char_array[2] = 117; //r
    char_array[3] = 110; //r
    char_array[4] = 100; //y
    char_array[5] = 101;
    char_array[6] = 114;
    char_array[7] = 101;

    char_array[8] = 0;

    printf("String = %s\n",char_array);

    return 0;
}