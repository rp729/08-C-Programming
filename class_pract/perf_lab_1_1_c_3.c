#include <stdio.h>

/*This project finds the value and size of variable
 * 
 * Name: Reuben Perry
 * Date: 01/06/2019
 * Project: Performance Lab 1
*/

int main(void)
{

    //declare variables used in program
	int var_int;
	float var_float;
	double var_double;
	char var_char;

    printf("Enter the value of your integer: ");
    scanf("%d",&var_int);

    printf("Enter the value of your float: ");
    scanf("%f",&var_float);

    printf("Enter the value of your double: ");
    scanf("%lf",&var_double);

    printf("Enter the value of your character: ");
    scanf("%s",&var_char);

	
	printf("Your integer is %d \n", var_int);
    printf("The size of your integer is %ld \n", sizeof(var_int));

    printf("Your float is %f \n", var_float);
    printf("The size of your float is %ld \n", sizeof(var_float));

    printf("Your double is %lf \n", var_double);
    printf("The size of your double is %ld \n", sizeof(var_double));

    printf("Your first character is %c \n", var_char);
    printf("The size of your integer is %ld \n", sizeof(var_char));
	
	return 0;

}