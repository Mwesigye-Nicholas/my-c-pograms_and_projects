#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: C program to print reverse pattern eg N .....5,4,3,2,1
 * 
 * Return: Always 0 (success)
 *
 */

 int main(void)
 {
 	int i, n;

	printf("Enter the value of N: ");
	scanf("%d", &n);

	for(i = n; i >= 1; i--)
	{
		printf("%d,", i);
	}
	printf("\b ");
	return(0);
}
