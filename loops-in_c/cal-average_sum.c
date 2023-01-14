#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: C program to calculate average
 * and sum of scores entered using a for loop
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int count, n;
	float num = 0, sum = 0, avg = 0;

	printf("Enter the number of students whose average you want: ");
	scanf("%d", &n);

	for (count = 1; count <= n; count++)
	{
		printf("Enter your scores: ");
		scanf("%f", &num);


		sum = sum + num;
	}
	avg = sum / n;
	printf("Average = %f\n", avg);
	printf("Sum = %f\n", sum);
	return (0);
}

