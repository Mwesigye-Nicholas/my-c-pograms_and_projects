#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: c program to print pattern
 * eg 1
 *    12
 *    123
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n, i, j;

	printf("Enter the number of rows: ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				printf("%d", j);

			}
			printf("\n");
		}
	return (0);
}
