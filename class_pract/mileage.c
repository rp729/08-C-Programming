//calculate mileage reimbursement

#include<stdlib.h>
#include<stdio.h>
#include<math.h>
//gcc file.c -lm (links math header)
//argc = argument count
//argv = string array

int main(int argc, char **argv){
    double startingMileage, endingMileage, ratePerMile;

    printf("Enter the starting mileage: ");
    scanf("%lf",&startingMileage);

    printf("Enter the ending mileage: ");
    scanf("%lf",&endingMileage);

    printf("Enter rate per mile: ");
    scanf("%lf", &ratePerMile);

    double totalMiles = endingMileage - startingMileage;
    double reimbursement = totalMiles * ratePerMile;
    reimbursement = round(reimbursement * 100)/100; //unsure why we multiply then divide by 100

    printf("you drove %.0f miles, at $%.2f per mile, you are owed $%.2f\n",totalMiles,ratePerMile,reimbursement);

    return 0;
}
