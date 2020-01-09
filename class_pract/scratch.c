#include <stdio.h>

int main(void){

    int x = 9;
    int y = 3;
    //////// WRITE EACH VALUE OF X ////////

    printf("x *= y :%d\n",x *= y);      //27
    printf("x /= y :%d\n",x /= y);      //9  
    printf("x %%= y :%d\n",x %= y);     //0
    printf("x %%= y :%d\n",x += y);     //3
    printf("x += y :%d\n",x *= y);      //9
    printf("x -= y :%d\n",x -= y);      //6
    printf("x *= ++y :%d\n",x *= ++y);  //24
    printf("x /= y-- :%d\n",x /= y--);  //6
    printf("x %%= --x :%d\n",x %= --x); //0
    printf("x += --y :%d\n",x += --y);  //2
    printf("x %%= y :%d\n",x += y);     //4
    printf("x += y :%d\n",x *= y);      //8
    printf("x -= y++ :%d\n",x -= y++);  //6
    printf("x %%= y :%d\n",x += y);     //9
    printf("x += y :%d\n",x *= y);      //27
    printf("(y %%= y) || (x /= x--) :%d\n",(y %= y) || (x /= x--)); // Bonus :0/False

    return 0;
}