#include<stdio.h>

int main(void)
{
    //initiate and declare operators
    double op1 = 0;
    double op2 = 0;

    //initiate operand
    char operand;

    //Prompt user for input and securly scan
    printf("Enter som math stuff:");
    fscanf(stdin,"%lf""%c""%lf",&op1,&operand,&op2);

    //Switch case statements
    switch (operand)
    {
    case '+':
        printf("%.2lf + %.2lf = %.2lf\n",op1,op2,op1 + op2);
        break;
    case '-':
        printf("%.2lf - %.2lf = %.2lf\n",op1,op2,op1 - op2);
        break;
    case '*':
        printf("%.2lf * %.2lf = %.2lf\n",op1,op2,op1 * op2);
        break;
    case '/':
        printf("%.2lf / %.2lf = %.2lf\n",op1,op2,op1 / op2);
        break;
    case '%':
        printf("%d %% %d = %d\n",(int)op1,(int)op2,(int)op1 % (int)op2);
        break;
    default:
        printf("ERROR! You entered %.2lf %c %.2lf\n",op1,operand,op2);
        break;
    }

    
    return 0;
}