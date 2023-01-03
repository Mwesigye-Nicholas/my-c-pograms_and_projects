#include <stdio.h>

/*
 * C program to determine profit or loss on a sold product
 */

 int main(void)
 {
 	int selling_price, cost_price, loss, profit;

	printf("Enter your cost price: ");
	scanf("%d", &cost_price);

	printf("Enter your selling price: ");
	scanf("%d", &selling_price);

	if(selling_price > cost_price)
	{
		profit = selling_price - cost_price;
		
		printf("your selling price was %d\n", selling_price);
		printf("your cost price was %d\n", cost_price);
		printf("your profit is %d\n", profit);
	}
	else if(cost_price > selling_price)
	{
		loss = selling_price - cost_price;
		
		printf("your selling price was %d\n", selling_price);
		printf("your cost price was %d\n", cost_price);
		printf("your profit is %d\n", loss);
	}
	else
	{
		printf("No profit or loss made\n");
	}
	return (0);
}



