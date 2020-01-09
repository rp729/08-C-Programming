#include <stdio.h>

int main(void){

    //Declare and initialize class ages
    int classAge [15] = {47,24,25,27,26,28,29,32,29,25,28,26,29,31,28};

    //Display results
    printf("Tearchers age: %d \n",classAge[0]);
    printf("Student ages:\n %d\n %d\n %d\n %d\n %d\n %d\n %d\n %d\n %d\n %d\n %d\n %d\n %d\n %d \n",
        classAge[1],
        classAge[2],
        classAge[3],
        classAge[4],
        classAge[5],
        classAge[6],
        classAge[7],
        classAge[8],
        classAge[9],
        classAge[10],
        classAge[11],
        classAge[12],
        classAge[13],
        classAge[14]);

    return 0;
}