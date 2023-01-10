#include <stdio.h>

/*
 * main entry point
 * C program to determine a leap year using logical && and || operator
 */

int main(void)
{
	int year;

	printf("Enter the year you want to check: ");
	scanf("%d", &year);

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		printf("year you entered is a leap year\n");
	}
	else
	{
		printf("year you entered is not a leap yea\n");
	}
	return (0);
}
