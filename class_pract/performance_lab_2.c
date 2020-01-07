#include <stdio.h>

int main(void)
{
    //Declare vars
    int integer = 45;
    float singlePrecision = 2.2;
    double doublePrecision = 3.3;
    char singleChar = '$';

    //Declare typecast types
    float int_float = (float)integer;
    char int_char = (char)integer;
    double float_doub = (double)singlePrecision;
    int char_int = (int)singlePrecision;
    char singleChar2 = 63;


    printf("%f \n",int_float);
    printf("%c \n",int_char);
    printf("%lf \n",float_doub);
    printf("%d \n",char_int);
    printf("%c \n",singleChar2);

    return 0;
}