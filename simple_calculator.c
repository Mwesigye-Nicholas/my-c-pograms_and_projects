#include <stdio.h>

/*
 * C program to emulate a simple calculator
 */

 int main(void)
 {
 	char operator;
	double num1, num2, result;
	
	printf("choose the operator['+', '-', '*', '/']: ");
	scanf("%c", &operator);

	printf("Enter first number: ");
	scanf("%lf", &num1);

	printf("Enter another number: ");
	scanf("%lf", &num2);

	switch(operator)
	{
		case '+':
			
			result = num1 + num2;
			printf("result = %.2lf\n", result);
			break;

		case '-':
			
			result = num1 - num2;
			printf("result = %.2lf\n", result);
			break;

		case '*':
			
			result = num1 * num2;
			printf("result = %.2lf\n", result);
			break;

		case '/':
			
			result = num1 / num2;
			printf("result = %.2lf\n", result);
			break;

		return (0);
		}
	}
