#include <stdio.h>

/*This project finds the value and size of variable
 * 
 * Name: Reuben Perry
 * Date: 01/06/2019
 * Project: Performance Lab 1
*/

int main(void)
{

    //declare and initialize integer
    printf("Enter the value of your integer: ");
	int var_int = scanf("%d",&var_int);

    //declare and initialize float
    printf("Enter the value of your float: ");
	float var_float = scanf("%f",&var_float);

    //declare and initialize double
    printf("Enter the value of your double: ");
	double var_double = scanf("%lf",&var_double);

    //declare and initialize char (scanf string and convert to char later)
    printf("Enter the value of your character: ");
	char var_char = scanf("%s",&var_char);
    
	//Display value and size of integer
	printf("Your integer is %d \n", var_int);
    printf("The size of your integer is %ld \n", sizeof(var_int));

    //Display value and size of float
    printf("Your float is %f \n", var_float);
    printf("The size of your float is %ld \n", sizeof(var_float));

    //Display value and size of double
    printf("Your double is %lf \n", var_double);
    printf("The size of your double is %ld \n", sizeof(var_double));

    //Display value and size of char
    printf("Your first character is %c \n", var_char);
    printf("The size of your integer is %ld \n", sizeof(var_char));
	
	return 0;

}