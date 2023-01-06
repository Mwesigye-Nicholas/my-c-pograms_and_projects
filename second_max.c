#include <stdio.h>

/*
 * C program to determine the second largest number among three
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

	if(num1 > num2 && num1 < num3)
	{
		printf("%d is the second largest among the three entered number\n", num1);
	}
	else if(num2 > num1 && num2 < num3)
	{
		printf("%d is the second largest among the three entered numbers\n", num2);
	}
	else if(num3 > num1 && num3 < num2)
	{
		printf("%d is the second largest among the three entered numbers\n", num3);
	}
	else
	{
		printf("Entered numbers are equal\n");
	}
	return(0);
}

