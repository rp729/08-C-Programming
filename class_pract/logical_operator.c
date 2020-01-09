#include <stdio.h>

int main(void){

    int x = 99;
    int y = 0;

    //////// WRITE EACH RESULT ////////
    printf("x && y :%d\n",x && y);      //False
    printf("x && y :%d\n",y || x);      //True
    printf("!y :%d\n", !y);             //True
    printf("y && 0 :%d\n",y && 0);      //False
    printf("x || 42 :%d\n", x || 42);   //True
    printf("!x :%d\n", !x);             //False
    printf("x && x :%d\n", x && x);     //True
    printf("y || y :%d\n", y || y);     //False
    printf("!1 :%d\n", !1);             //False
    printf("1 && 1 :%d\n", 1 && 1);     //True
    printf("(0 && 1) || (2 && 3) :%d\n",(0 && 1) || (2 && 3));  // Bonus :True

    return 0;
}