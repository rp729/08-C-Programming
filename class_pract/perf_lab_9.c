#include<stdio.h>
#include<math.h>
//gcc file.c -lm (links math header)

int main(void){

    //Declare variables
    double a, b, c;

    //Accept input from user
    printf("Enter your first number: ");
    scanf("%lf", &a);

    //Accept more input from user
    printf("Enter your second number: ");
    scanf("%lf", &b);
    
    //Error checking
    if (a > 0 && b > 0 )
    {
        //arithmetic hypotenuse calculation
        c = sqrt(a*a + b*b);
        printf("Length of hypotenuse: %f\n", c);
    }

    //Else statement if the user entered invalid input (0 or less)
    else
    {
        printf("Invalid triangle... Sides must be larter than 0!\n");
    }

    return 0;
}