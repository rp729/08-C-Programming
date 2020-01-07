#include <stdio.h>

/*This project finds the value and size of variable
 * 
 * Name: Reuben Perry
 * Date: 01/06/2019
 * Project: Demo Lab 1
*/

int main(void)
{
    int myIntArray [10] = {100,100,100,100,100,100,100,100,100,100};
    printf("%d \n",myIntArray[3]);

    float myFloatArray [5] = {1,2,3,4,5};
    printf("%f \n",myFloatArray[3]);

    char myCharArray [256] = {0};
    printf("%c \n",myCharArray[3]);

    myCharArray[0] = 'P';
    myCharArray[1] = 'E';
    myCharArray[2] = 'R';
    myCharArray[3] = 'R';
    myCharArray[4] = 'Y';

    printf("%c \n",myCharArray[3]);

    return 0;
}