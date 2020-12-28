#include<stdio.h>

void main()
{
	int number1, number2 = 0;

	printf("\nEnter first number: ");
	scanf("%d", &number1);
	printf("\nEnter second number: ");
	scanf("%d", &number2);

	// swapping the numbers
	number1 = number1 + number2;
	number2 = number1 - number2;
	number1 = number1 - number2;

	// displaying the numbers
	printf("\nAfter swapping, First Number = %d", number1);
	printf("\nAfter swapping, Second Number = %d", number2);
}