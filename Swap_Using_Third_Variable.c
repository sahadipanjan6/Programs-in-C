#include<stdio.h>

void main()
{
	int number1, number2, temp = 0;

	printf("\nEnter first number: \n");
	scanf("%d", &number1);
	printf("\nEnter second number: \n");
	scanf("%d", &number2);

	// swapping the numbers
	temp = number2;
	number2 = number1;
	number1 = temp;

	// displaying the integers after swapping
	printf("\nAfter Swapping, the numbers are: \n");
	printf("\n%d", number1);
	printf("\n%d", number2);
}