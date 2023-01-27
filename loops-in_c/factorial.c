#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: C program to print factorial of a given number
 *
 *  Return: Always 0 (success)
 */

int main(void)
{
	int n, i, fact = 1;

	printf("Enter the value of n: ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		fact = fact * i;
	}
	printf("The factorial of %d is %d \n", n, fact);
	return (0);
}
