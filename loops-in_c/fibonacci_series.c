#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: C program to print 
 * fibonacci series up to n terms
 * 
 * Return: Always 0 (success)
 */

 int main(void)
 {

 	int f1 = 0;
	int f2 = 1;
	int n, f3;

	printf("Enter the value of n: ");
	scanf("%d", &n);

	printf("%d \t %d ", f1, f2);
	
	f3 = f1 + f2;
	
	while(f3 <= n)
	{
		printf("\t %d ", f3);
		f1 = f2;
		f2 = f3;
		f3 = f1 + f2;
	}
	return(0);
}

