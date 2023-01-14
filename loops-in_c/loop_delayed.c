#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: C program to print delayed loop using a for loop
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 100; i >= 0; i--)
	{
		printf("%d", i);
		printf("\n");
	}
	return (0);
}
