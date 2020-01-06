// Program computes the average of three numbers

#include<stdlib.h>
#include<stdio.h>

int main( int argc, char **argv){
    
    double a, b, c;

    printf("enter the first number: ");
    scanf("%lf", &a); 

    printf("enter the second number: ");
    scanf("%lf", &b); 

    printf("enter the third number: ");
    scanf("%lf", &c);

    //3.0 is to cast so that the program works. At least one item (a, b, c, or 3) must be double to match var type
    double average = (a + b + c) / 3; 

    printf("The average of %f, %f, and %f is %f\n", a,b,c, average);

    return 0;
}