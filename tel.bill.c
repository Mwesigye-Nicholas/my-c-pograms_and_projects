#include <stdio.h>

/*
 * C program to tell teh customer's tell bill
 * based on calls made
 */

int main(void)
{
	double tel_bil, rate;
	int calls;
	
	printf("Enter the number of calls you made: ");
	scanf("%d", &calls);

	if(calls >= 1 && calls <= 100)
	{
		rate = 0;
		
		tel_bil = calls * rate;
		printf("Your telephone bill is %.2f\n", tel_bil);

	}
	else if(calls >= 101 && calls <= 200)
	{
		rate = 0.80;
		
		tel_bil = calls * rate;
		printf("Your telephone bill is %.2f\n", tel_bil);
	}
	else if(calls >= 201 && calls <= 500)
	{
		rate = 1.00;

		tel_bil = calls * rate;
		printf("Your telephone bill is %.2f\n", tel_bil);
	}
	else if(calls >= 501)
	{
		rate = 1.20;

		tel_bil = calls * rate;
		printf("Your telephone bill is %.2f\n", tel_bil);
	}
	else
	{
		printf("Invalid entry\n");
	}
	return(0);
}
