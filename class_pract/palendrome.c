#include<stdio.h>
#include<string.h>

//Declare palendrome
int palendrome(int start, int end, char *string);

int main(void)
{
	char string[20];
	int length,start=0;
	int result;
	printf("Enter a word to find if it's a palendrome :");
    fgets(string,sizeof(string),stdin);
	length = strlen(string);
	int end = length-2;
	if (palendrome(start,end,string))
	{
		printf("Palendrome!!!!\n");
	}
	else
	{
		printf("NOPE!\n");
	}

	return 0;
}

int palendrome(int start, int end, char *string)
{
	if (string[start] != string[end])
	{
		return 0;
	}
	else if (start == end)
	{
		return 1;
	}
	else
	{
		return palendrome(++start,--end,string);
	}

	return 0;
}