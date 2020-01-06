// Program computes the average of three numbers

#include<stdlib.h>
#include<stdio.h>

int main( int argc, char **argv){
    
    int a, b, c;

    printf("enter the first number: ");
    scanf("%d", &a); 

    printf("enter the first number: ");
    scanf("%d", &b); 

    printf("enter the first number: ");
    scanf("%d", &c);

    //3.0 is to cast so that the program works. At least one item (a, b, c, or 3) must be double to match var type
    double average = (a + b + c) / 3.0; 

    printf("The average of %d, %d, and %d is %f\n", a,b,c, average);

    return 0;
}