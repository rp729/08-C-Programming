/*
4. Define a struct type that contains a person's name consisting of a first name and a second name, 
plus the person's phone number. Use this struct in a program that will allow one or more names and 
corresponding numbers to be entered and will store the entries in an array of structures. 
The program should allow a second name to be entered and output 
all the numbers corresponding to the name, and optionally output all the names with their corresponding numbers.
*/
#include<stdio.h>

int main(void)
{
    struct name
    {
        char first[48];
        char last[48];
        char phone[48];
    };

    int x, i;
    printf("Enter the number of students you want to enter :");
    fscanf(stdin,"%d",&x);

    struct name st[x];

    printf("Enter Records of %d Students",x);
    for (i = 0; i < x; i++)
    {
        printf("\nEnter first name:");
        fscanf(stdin,"%s",st[i].first);
        printf("\nEnter last name:");
        fscanf(stdin,"%s",st[i].last);
        printf("\nEnter phone number:");
        fscanf(stdin,"%s",st[i].phone);
    }
    printf("\nStudent Information List:");
    for (i = 0; i < x; i++)
    {
        printf("\nFirst: %s\nLast: %s\nPhone: %s\n",st[i].first,st[i].last,st[i].phone);
    }
    
    
    

    return 0;
}
