#include<stdio.h>

void main()
{
	int year = 0;

	printf("\nEnter a year: ");
	scanf("%d", &year);

	// checking the conditions
	if(year % 400 == 0)
		printf("\n%d is a Leap Year!", year);

	else if(year % 100 == 0)
		printf("\n%d is NOT a Leap Year!", year);

	else if(year % 4 == 0)
		printf("\n%d is a Leap Year!", year);

	else
		printf("\n%d is NOT a Leap Year!", year);
}