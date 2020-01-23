#include<stdio.h>

int main(void)
{
    char user_input[128];

    printf("Enter some stuff :");
    fscanf(stdin,"%s",user_input);

    char *input_ptr = user_input;
    char *temp_value = input_ptr;

    printf("temp_value var is = %s",temp_value);

    return 0;
}