#include<stdio.h>

void main()
{
	int num1, num2, num3 = 0;

	printf("\nEnter 3 numbers with space in between: ");
	scanf("%d %d %d", &num1, &num2, &num3);

	// checking the conditions
	if((num1>num2) && (num1>num3))
		printf("\n%d is the largest number.", num1);

	else if((num2>num1) && (num2>num3))
		printf("\n%d is the largest number.", num2);

	else
		printf("\n%d is the largest number.", num3);
}