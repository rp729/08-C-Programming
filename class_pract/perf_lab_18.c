#include<stdio.h>

int main(void)
{
    unsigned num, i;
    int count = 0;
    int index = 0;

    printf("Enter a number to find divisibles :");
    fscanf(stdin,"%d",&num);
    printf("You entered :%d\n",num);

    while (count < num)
    {
        for (count=0; count < num; count++)
        {
            if (num % (count+1) == 0 && count+1 != num && index < 20)
            {
                index++;
                printf("%d :%d\n",index,count+1);
            }
            else if (index >= 20)
            {
                break;
            }
            else
            {
                continue;
            }  
        }
        if (index >= 20)
        {
            break;
        }
        
    }
    

    return 0;
}