#include <stdio.h>

int main(void){

    int x = 1;
    int y = 4;
    float z = 0;
    //////// WRITE EACH RESULT ////////
    printf("\n%d\n",x * y);     //28
    printf("%f\n",z = x / y);   //1.000000
    printf("%d\n",x % y);       //3
    printf("%d\n",y + x);       //11
    printf("%d\n",y - x);       //-3
    printf("%d\n",-y);          //-4
    printf("++x :%d x++ :%d\n",++x,x++);         //8
    //printf("%d\n",x++);         //8
    printf("%d\n",y++);         //4
    printf("%d\n",x--);         //8
    printf("%d\n",--y);         //4
    printf("%d\n",1 + 2 * (3 + y) + 5);  //20k

    return 0;
}