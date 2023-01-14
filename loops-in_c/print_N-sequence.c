#include <stdio.h>

/**
 *
 * C program to print N sequency
 *
 * eg 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 
 */

 int main(void)
 {
 	int n, i;
	
	i = 1;
	
	printf("Enter number of sequency: ");
	scanf("%d", &n);

	while(i <= n)
	{
		printf(" %d ,", i);
		i++;
	}
	
	printf("\b");
	return(0);
}
