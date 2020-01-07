#include<stdlib.h>
#include <stdio.h>
#include<math.h>

/*This program convers number of days in years, weeks, days
 * 
 * Name: Reuben Perry
 * Date: 01/07/2019
 * Project: Performance Lab 2
*/

int main(void)
{
    double totalDays; 

    printf("Enter the total number of days: ");
    scanf("%lf",&totalDays);

    double years = floor(totalDays / 365);
    double weeks = floor((totalDays - (years * 365)) / 7);
    double days = floor(totalDays - (years * 365) - (weeks * 7));

    printf("Years:%.0f \nWeeks:%0.f \nDays:%0.f \n",years,weeks,days);
    


    return 0;
}