#include <stdio.h>

/**
 *
 * C program to accept scores, calculate their average and sum
 *
 */
int main(void)
{

	int count = 0;
	float num = 0, sum = 0, avg = 0;

	printf("Enter a number less than 0 to quit\n");

	printf("Enter your scores: ");
	scanf("%f", &num);

	while(num > 0)
	{
		
		printf("Enter your scores: ");
		scanf("%f", &num);
		
		sum = sum + num;
		count ++;
	}
	
	avg = sum / count;
	printf("Average = %f\n", avg);
	printf("Sum = %f\n", sum);
}


