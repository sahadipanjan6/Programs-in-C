#include<stdio.h>

// function prototypes
int isPrime(int number);

void main()
{
	int lower = 0;
	int upper = 0;
	int count = 0;
	int i, j = 0;

	printf("\nEnter the lower bound: ");
	scanf("%d", &lower);
	printf("\nEnter the upper bound: ");
	scanf("%d", &upper);

	// checking and displaying the prime numbers within the range
	printf("\nPrime Numbers within %d and %d are as follows:- \n", lower, upper);
	for(i=lower; i<=upper; i++)
	{
		if(isPrime(i) == 1)
			printf("%d\t", i);
		else
			continue;
	}
	printf("\n");
}

// function definition to check Prime or not
int isPrime(int number)
{
	int i, count = 0;
	int flag = 0;

	for(i=1; i<=number; i++)
	{
		if(number%i == 0)
			count++;
	}

	if(count == 2)
		flag = 1;

	return flag;
}