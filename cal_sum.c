#include <stdio.h>

/*
 * c program to determine the sum of a three digit number
 * eg 123 = 6
 */

int main(void)
{
	int n, remainder, sum = 0, t;

	printf("Enter three digit number: ");
	scanf("%d", &n);

	t = n;

	while (t != 0)
	{
		remainder = t % 10;
		sum = sum + remainder;
		t = t / 10;
	}
	
	printf("The sum of the three digit number %d is %d \n\n", n, sum);
	return(0);
}



