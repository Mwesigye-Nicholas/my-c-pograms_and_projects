#include <stdio.h>

/*
 *
 * C program to determine a palindrome
 *
 */

int main(void)
{
	int num, remainder, reverse = 0, temp;
	
	printf("Enter the number you want to check: ");
	scanf("%d", &num);
	
	temp = num;
	
	while(num > 0)
	{
		remainder = num % 10;

		reverse = reverse * 10 + remainder;

		num = num / 10;
	}

	if(temp == reverse)
	{
		printf("The number you entered is a palindrome number\n");
	}
	else
	{
		printf("The number you entered is not a palindrome number\n");
	}
	return(0);
}

