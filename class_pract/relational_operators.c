#include <stdio.h>

int main(void){

    int x = 2;
    int y = 6;
    //////// WRITE EACH RESULT ////////
    printf("y < x :%d\n",y < x);    //False
    printf("y <= x :%d\n",y <= x);  //False
    printf("y > x :%d\n",y > x);    //True
    printf("y >= x :%d\n",y >= x);  //True
    printf("y == x :%d\n",y == x);  //False
    printf("y != x :%d\n",y != x);  //True
    printf("2 == y :%d\n",2 == y);  //False
    printf("6 != x :%d\n",6 != x);  //True
    printf("6 >= 2 :%d\n",6 >= 2);  //True
    printf("2 < 6 :%d\n",2 < 6);    //True  
    printf("x != y != 3 >= x :%d\n",x != y != 3 >= x);  // Bonus :False

    return 0;
}