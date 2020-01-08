#include <stdio.h>

int main(void){

    /*
    Demo Lab 4

    > Read a string into a char array
    > Specify a field-width to protect against buffer overflow
    > Ensure the field-width leaves room for the nul-terminator
    > Stop reading at the first capital letter or new line
    */


   /*
   char char_array[64];             //Declar char_array with size of 64
   printf("Enter a string :");      //Prompts user to enter characters
   scanf("%63[^A-Z]s",char_array);    //Accepts characters until capital is given
   printf("\n%s\n",char_array);     //Display results
    */

    /*
    Demo Lab 5

    > Read three ints, representing the date, from one line
    > Format the input so the integers are separated by a dash (-) as <mm>-<dd>-<yyyy>
    > Output the results as a date with leading zeros <mm>/<dd>/<yyyy>
    > Specify the field width of the output appropriately
    */


   
   //Declare and initialize
   int mm = 0;
   int dd = 0;
   int yyyy = 0;
   
   printf("Format the input so the integers are separated by a dash (-) as <mm>-<dd>-<yyyy> :");
   scanf("%d%*c%d%*c%d",&mm, &dd, &yyyy);
   printf("\nDate entered :%.2d/%.2d/%d\n",mm,dd,yyyy);
   


  /* Performance Lab 8
    Read a first, middle and last name as input into separate char arrays
    Specify a field-width to protect against buffer overflow
    Ensure the field-width leaves room for a nul-terminator
    Specify a ("\t") as a delimitating character
    Print the full name, separating each string with a tab and newline ("\t\n")
  */


    return 0;
}