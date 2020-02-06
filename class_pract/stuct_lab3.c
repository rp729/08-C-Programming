/*
3. Define a struct type with the name Length that represents a length in yards, feet, and inches. Define an add() 
function that will add two Length arguments and return the sum as type Length. 
Define a second function, show(), that will display the value of its Length argument. 
Write a program that will use the Length type and the add() and show() functions to sum 
an arbitrary number of lengths in yards, feet, and 
inches that are entered from the keyboard andut the total length.
*/

#include<stdio.h>

struct length
    {
        int yards;
        int feet;
        int inches;
    };

int add(int num1, int num2);
void show(struct length data);

int main(void)
{
    struct length param1;

    printf("Enter the number of yards for param 1 :");
    fscanf(stdin,"%d",&param1.yards);
    printf("Enter the number of feet for param 1 :");
    fscanf(stdin,"%d",&param1.feet);
    printf("Enter the number of inches for param 1 :");
    fscanf(stdin,"%d",&param1.inches);

    struct length param2;

    printf("Enter the number of yards for param 2 :");
    fscanf(stdin,"%d",&param2.yards);
    printf("Enter the number of feet for param 2 :");
    fscanf(stdin,"%d",&param2.feet);
    printf("Enter the number of inches for param 2 :");
    fscanf(stdin,"%d",&param2.inches);

    int total_param1 = param1.inches + (param1.feet * 12) + ((param1.yards * 3) * 12);
    int total_param2 = param2.inches + (param2.feet * 12) + ((param2.yards * 3) * 12);

    int total = add(total_param1,total_param2);

    struct length param3;

    param3.inches = total % 12;
    param3.feet = (total/12) % 3;
    param3.yards = (total/12)/3;

    show(param3);


    return 0;
}

int add(int num1, int num2)
{
    int total = num1 + num2;

    return total;
}

void show(struct length data)
{
    printf("\n\nYARDS: %d\nFEET: %d\nINCHES: %d\n", data.yards,data.feet,data.inches);

    return;
}