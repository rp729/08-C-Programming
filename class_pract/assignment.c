#include<stdlib.h>
#include <stdio.h>
#include<math.h>

/*This program convers number of days in years, weeks, days
 * 
 * Name: Reuben Perry
 * Date: 01/07/2019
 * Project: Performance Lab 2
*/


//main function
int main(void)
{
    //Declare totalDays as double
    double totalDays; 

    //initialize totalDays var with input
    printf("Enter the total number of days: ");
    scanf("%lf",&totalDays);

    //Declare and initialize years, weeks, and days
    double years = floor(totalDays / 365);
    double weeks = floor((totalDays - (years * 365)) / 7);
    double days = floor(totalDays - (years * 365) - (weeks * 7));

    //Display the results
    printf("Years:%.0f \nWeeks:%0.f \nDays:%0.f \n",years,weeks,days);
    
    return 0;
}