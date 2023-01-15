#include <stdio.h>

/**
 * main - Entry point
 *
 * Descroption: C program to print N.......5,4,3,2,1 (reverse pattern)
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int n, i;

	printf("Enter the final number of series you want to print: ");
	scanf("%d", &n);

	for (i = n; i >= 1; i--)
	{
		printf("%d,", i);
	}
	printf("\b ");
	return (0);
}
