#include<stdio.h>

int main(void)
{
    //initiate and declare operators
    int op1 = 0;
    int op2 = 0;

    //initiate operand
    char operand;

    //Prompt user for input and securly scan
    printf("Enter som math stuff:");
    fscanf(stdin,"%d""%c""%d",&op1,&operand,&op2);

    //Switch case statements
    switch (operand)
    {
    case '+':
        printf("%d + %d = %d\n",op1,op2,op1 + op2);
        break;
    case '-':
        printf("%d - %d = %d\n",op1,op2,op1 - op2);
        break;
    case '*':
        printf("%d * %d = %d\n",op1,op2,op1 * op2);
        break;
    case '/':
        printf("%d / %d = %d\n",op1,op2,op1 / op2);
        break;
    case '%':
        printf("%d %% %d = %d\n",op1,op2,op1 % op2);
        break;
    default:
        printf("Your input: %d %c %d\n",op1,op2,operand);
        break;
    }

    
    return 0;
}