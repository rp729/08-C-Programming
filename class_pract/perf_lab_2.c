#include <stdio.h>

/*This program convers number of days in years, weeks, days
 * 
 * Name: Reuben Perry
 * Date: 01/06/2019
 * Project: Performance Lab 1
*/

int main(int argc, char **argv)
{
    //declare and initialize days
    printf("Enter the number of days: ");
	float var_days = scanf("%f",&var_days);
    printf("%f",var_days);

    //declare and initiliaze years, weeks, and days of variable days entered.
    double years = var_days/365;
    printf("%lf",years);

    double weeks = (var_days - (years*365))/7;
    double days = var_days - (years * 365) - (weeks * 7);
    
	//Display years, weeks, and days
	printf("%.0lf years, %.0lf weeks, %.0lf days\n", years,weeks,days);
	
	return 0;

}