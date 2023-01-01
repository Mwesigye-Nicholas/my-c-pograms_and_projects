#include <stdio.h>
#include <stdlib.h>

/*
 * C program to reverse any digit number
 */

int main(void)
{
	int n, temp, reverse = 0, remainder;
	
	printf("Enter a three digit number: ");
	scanf("%d", &n);

	temp = n;

	while (temp != 0)
	{
		remainder = temp % 10;
		reverse = reverse * 10 + remainder;
		temp = temp / 10;
	}
	printf("The reverse of %d is %d\n\n", n, reverse);

}
