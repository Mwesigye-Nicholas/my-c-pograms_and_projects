#include <stdio.h>

/**
 *
 * C program to print a delayed loop
 *
 */

int main(void)
{
	int j;
	
	j = 100;

	while(j > 0)
	{
		printf("%d\n", j);
		j--;
	}
	return(0);
}

