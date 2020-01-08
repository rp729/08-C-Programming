#include <stdio.h>

int main(void){

    ////////// INITIALIZATION //////////
    int hours = 0;
    int minutes = 0;
    int seconds = 0;

    ////////// SCANF STATEMENTS //////////
    scanf("%d%*c%d%*c%d", &hours, &minutes, &seconds);
    printf("1st: %d 2nd: %d 3rd: %d\n", hours,minutes,seconds);

    // First %d == &hours
    // Second %d == &minutes
    // Third %d == &seconds

    return 0;
}