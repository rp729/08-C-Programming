// blah!

#include<stdlib.h>
#include<stdio.h>
#include<math.h>
//gcc file.c -lm (for math)

int main( int argc, char **argv){
    double a, b, h;

    printf("Enter your first number: ");
    scanf("%lf", &a);

    printf("Enter your second number: ");
    scanf("%lf", &b);

    h = sqrt(a*a + b*b);

    printf("Length of hypotenuse: %f\n", h);

    return 0;
}