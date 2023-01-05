#include <stdio.h>

/*
 * C Program to determine maximum number among the three entered number
 */

 int main(void)
 {
 	int num1, num2, num3;

	printf("Enter first number: ");
	scanf("%d", &num1);

	printf("Enter second number: ");
	scanf("%d", &num2);
	
	printf("Enter third number: ");
	scanf("%d", &num3);

	if(num1 > num2 && num1 > num3)
	{
		printf("First number is the greatest among the three entered numbers\n");
	}
	else if(num2 > num1 && num2 > num3)
	{
		printf("Second number is the greatest among the three entered numbers\n");
	}
	else
	{
		printf("The third number is the greatest among the three entered numbers\n");
	}
	return(0);
}
