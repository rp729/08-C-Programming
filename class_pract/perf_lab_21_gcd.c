#include<stdio.h>
/*
int gcd(int x, int y);

int main(void)
{
    //Delcare variables
    int x, y;
    
    //Prompt user for input to initialize variables
    printf("Enter two whole numbers (integers)\nTo find the greatest common divsor :");
    fscanf(stdin,"%d %d",&x,&y);

    //Run the recursive function and display the results
    int g = gcd(x,y);
    printf("The GCD for %d and %d is %d\n",x,y,g);

    return 0;
}

//Recursive function to find the gcd
int gcd(int x, int y)
{
    //base statement to exit recursive function
    if (y == 0)
    {
        return x;
    }
    //Magic
    else
    {
        gcd(y, x%y);
    }
}
=====================================================================
*/

//Countdown Function
int main()
{ 
    static int x = 5;
    printf("%d\n",x--);
    if (x)
    {
        main();
    }
}
