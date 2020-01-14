#include<stdio.h>
//Used for toupper()
#include<ctype.h>
//fgets(user_input,sizeof(user_input),stdin);

int main(void)
{
    //Declare and initialize arrays
    int int_array[26] = {0};
    char char_var = {0};
    char char_new = {0};

    //Used in for and while loops
    int i, c;

    //Do while loop as prompted
    do
    {
        printf("Enter a lowercase letter :");
        char_var = getchar();

        //While loop
        while (((int)char_var < 95 || (int)char_var > 122) && (int)char_var != 10)
        {
        //Clears buffer
        while ((c = getchar()) != '\n' && c != EOF){}

        printf("ERROR! You must enter a lowercase letter :");
        char_var = getchar();
        }

    //If user entered a letter
    if ((int)char_var >= 95 && (int)char_var <= 122)
        {
        //To Upper as prompted
        char_new = toupper(char_var);
        printf("You entered :%c ASCII :%d\n",char_new, (int)char_new);

        //Locate position of letter in int array and add one to position
        int_array[(int)char_new-65] = int_array[(int)char_new-65] + 1;

        //Display int array
        for (i=0; i < (sizeof(int_array) / sizeof(int_array[0]));i++) 
            {
            printf("%c :%d\n",(char)i+65,int_array[i]);
            }
        }
    
    //Display the user is exiting the program
    else if (char_var = '\n')
        {
        printf("New Line Entered! Press enter to exit.\n");
        }
    
    //If you some how enter something crazy that breaks the code
    else
        {
        printf("ERROR! Something went wrong...");
        }
    

    //Clear buffer
    while ((c = getchar()) != '\n' && c != EOF){}

      //Statement to break out of while loop
    } while ((int)char_var != 10);

    return 0;
}