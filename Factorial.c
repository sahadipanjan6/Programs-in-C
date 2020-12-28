#include<stdio.h>

void main()
{
	int number = 0;
	int fact = 1;
	int i = 0;

	printf("\nEnter any number: ");
	scanf("%d", &number);

	for(i=1; i<=number; i++)
		fact = fact * i;

	printf("\nFactorial of %d = %d\n", number, fact);

}