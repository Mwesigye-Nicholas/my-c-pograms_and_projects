#include<stdio.h>

/*
 * C program to determine a leap year
 *
 */
 
 int main(void)
 {
 	int year;

	printf("Enter your year of choice: ");
	scanf("%d", &year);

	if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		printf("The year %d is a leap year\n", year);
	}
	else
	{
		printf("The year %d is not a leap year\n", year);
	}
	return(0);
}
