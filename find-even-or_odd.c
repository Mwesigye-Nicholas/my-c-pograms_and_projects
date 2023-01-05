#include <stdio.h>

/*
 * C Program to determine even or odd number
 */

 int main(void)
 {
 	int num;
	
		printf("Enter a number: ");
		scanf("%d", &num);
		
		if(num % 2 == 0)
		{
			printf("Number you entered is even\n");
		}
		else
		{
			printf("Number you entered is odd\n");
		}
	
	return(0);
}
