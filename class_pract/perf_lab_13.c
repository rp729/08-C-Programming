#include<stdio.h>

int main(void)
{
    //Declare and initialize unsigned ints
    unsigned first_int = 0;
    unsigned second_int = 0;
    unsigned third_int = 0;

    printf("Enter two numbers :");
    fscanf(stdin,"%d %d",&first_int,&second_int);

    if (first_int == second_int)
    {
        printf("ERROR\n");
    }

    else if (first_int > second_int)
    {
        third_int = first_int;
        first_int = 0;
    }
    else
    {
        third_int = second_int;
        second_int = 0;
    }

    if (first_int + second_int + third_int > 2)
    {
        printf("The sum of num1 :%d, num2 :%d and num3 :%d is %d\n",first_int,second_int,third_int,first_int + second_int + third_int);
    }
    
    
    
    
    
    return 0;
}