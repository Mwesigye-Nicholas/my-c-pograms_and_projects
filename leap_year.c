#include <stdio.h>

/*
 *
 * C program to determine a leap year
 */

 int main(void)
 {
 	int year;

	printf("Enter a year you want to check: ");
	scanf("%d", &year);

	if(year % 4 == 0)
	{
		printf("year you entered is a leap yaer\n");
	}
	else if(year % 100 != 0)
	{
		printf("year you entered is not a leap year\n");
	}
	else if(year % 400)
	{
		printf("year you entered is a leap year\n");
	}
	else
	{
		printf("year you entered is not a leap year\n");
	}
	return(0);
}
