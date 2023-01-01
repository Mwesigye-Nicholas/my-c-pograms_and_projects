#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
 * C program to merge two numbers
 * eg a = 23, b =32, 2332
 */

int concat(int a, int b)
{
	char s1[20];
	char s2[20];
	
	sprintf(s1, "%d", a);
	sprintf(s2, "%d", b);

	strcat(s1, s2);
	int c = atoi(s1);
	return c;
}

int main(void)
{	
	int a;
	int b;
	
	printf("Enter number1: ");
	scanf("%d", &a);

	printf("Enter another number2: ");
	scanf("%d", &b);

	printf("%d\n", concat(a, b));
	return(0);
}
