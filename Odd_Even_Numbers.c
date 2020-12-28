#include<stdio.h>

void main()
{
	int number = 0;

	printf("\nEnter any number: \n");
	scanf("%d", &number);

	// checking whether the number is Odd or Even
	if(number % 2 == 0)
		printf("\n%d is an Even Number...", number);

	else
		printf("\n%d is an Odd Number...", number);
}