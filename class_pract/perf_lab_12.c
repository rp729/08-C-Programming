#include<stdio.h>

int index_i(int i)
{
    if (i == 0)
    {
        return 3;
    }
    
    else
    {
        return 1 + (i >> 31) - (-1 >> 31);
    }
}

void check(int n)
{
    int val = index_i(n);

    if (val == 1)
    {
        printf("negative\n");
    }

    else if (val == 3)
    {
        printf("zero\n");
    }
    
    else
    {
        printf("positive\n");
    }
    
    

}

int main(void)
{
    int user_input = 0;
    printf("Enter a number :");
    scanf("%d",&user_input);

    check(user_input);

    return 0;
}