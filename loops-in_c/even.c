#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: program to determine prime numbers from 0 to 100
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 2; i <= 100; i = i + 2)
	{
		printf(" %d ,", i);
		 
	}
	printf("\b");
	return (0);
}

	
