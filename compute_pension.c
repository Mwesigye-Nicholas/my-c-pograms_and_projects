#include <stdio.h>

/*
 * p program to compute employee's pension
 *
 */

 int main(void)
 {
 	int age, pension;
	char sex[20];
//	char male[20];
//	char female[20];
	
	printf("Enter your sex: ");
	scanf("%s", sex);

	if(sex == male)
	{
		printf("Enter your age: ");
		scanf("%d", &age);

		if(age >= 0 && age < 60)
		{
			pension = 0;
			printf("your pension is %d\n", pension);
		}
		else if(age >= 60 && age < 90)
		{
			pension = 5000;
			printf("your pension is %d\n", pension);
		}
		else if(age >= 90)
		{
			pension = 3000;
			printf("your pension is %d\n", pension);
		}
	}
	else
	{
		printf("Invalid entry\n");
	}
	return(0);
}
