#include<stdio.h>

void main()
{
	int i, terms = 0;
	int a = 0;
	int b = 1;
	int c = 0;

	printf("\nEnter the number of terms: ");
	scanf("%d", &terms);

	// displaying the Fibonacci Series
	printf("\nFibonacci Series upto %d terms is as follows:- \n", terms);
	printf("%d\t%d\t", a, b);

	for(i=3; i<=terms; i++)
	{
		c = a + b;
		printf("%d\t", c);
		a = b;
		b = c;
	}
	printf("\n");
}