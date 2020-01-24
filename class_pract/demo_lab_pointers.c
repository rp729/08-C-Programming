//Macros Required
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define ERROR_CODE ((double)98245.1653)

//Declaring functions
double add(double firstNumber, double secondNumber);
double subtract(double firstNumber, double secondNumber);
double multiply(double firstNumber, double secondNumber);
double divide(double firstNumber, double secondNumber);

int main(void)
{
    //Declaring pointers and variables
	double(*mathFun_ptr)(double x, double y);
	double num1 = 0;
	char mathOperator = 0; 
	double num2 = 0;
	double returnValue = 0;


    //Prompt user for input
	printf("Enter two ints and/or doubles separated by a math operator\n");
	printf("e.g., 1.2 + 3.4, 5.6 - 7.8, 9.10 * 2.3, 4.5 / 6.7\n");
	//_flushall();        //Flush all streams and clear all buffers
	scanf("%lf %c %lf", &num1, &mathOperator, &num2);
	
    //If else statements to identify operators
	if (mathOperator == '+')
	{
		mathFun_ptr = &add;
	}
	else if (mathOperator == '-')
	{
		mathFun_ptr = &subtract;
	}
	else if (mathOperator == '*')
	{
		mathFun_ptr = &multiply;
	}
	else if (mathOperator == '/')
	{
		mathFun_ptr = &divide;
	}
    //Catch all statement if none of the if statements apply
	else
	{
		puts("Something went wrong!");
		return -1;
	}

    //If else statements for mathFun_ptr called as a function
	if (mathFun_ptr)
	{
		returnValue = mathFun_ptr(num1, num2);
		printf("The result is:\t%lf\n", returnValue);
	}
	else
	{
		puts("Something went wrong!");
		return -1;
	}

	getchar(); getchar();
	return 0;
}

//Add
double add(double firstNumber, double secondNumber)
{
	return firstNumber + secondNumber;
}

//Subtract
double subtract(double firstNumber, double secondNumber)
{
	return firstNumber - secondNumber;
}

//Multiply
double multiply(double firstNumber, double secondNumber)
{
	return firstNumber * secondNumber;
}

//Divide
double divide(double firstNumber, double secondNumber)
{
	if (secondNumber)
	{
		return firstNumber / secondNumber;
	}
	else
	{
		return ERROR_CODE;
	}
}
