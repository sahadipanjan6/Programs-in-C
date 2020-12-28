#include<stdio.h>

// function prototypes
int isPerfect(int number);

void main()
{
	int lower = 0;
	int upper = 0;
	int i = 0;

	printf("\nEnter lower bound: ");
	scanf("%d", &lower);
	printf("\nEnter upper bound: ");
	scanf("%d", &upper);

	// finding and displaying all the Perfect Numbers
	printf("\nPerfect Numbers within %d and %d are as follows:- \n", lower, upper); 
	for(i=lower; i<=upper; i++)
	{
		if(isPerfect(i) == 1)
			printf("%d\t", i);
	}
	printf("\n");
}

// function definition to check whether a number is Perfect or not
int isPerfect(int number)
{
	int i = 0;
	int sum_factors = 0;

	for(i=1; i<number; i++)
	{
		if(number%i == 0)
			sum_factors += i;
	}

	if(sum_factors == number)
		return 1;

	return 0;
}