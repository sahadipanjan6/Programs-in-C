#include<stdio.h>
#include<math.h>

// function prototypes
int isArmstrong(int number);

void main()
{
	int lower = 0;
	int upper = 0;
	int i = 0;

	printf("\nEnter lower bound: ");	
	scanf("%d", &lower);
	printf("\nEnter upper bound: ");
	scanf("%d", &upper);

	// finding and displaying the Armstrong Numbers
	printf("\nArmstrong Numbers within %d and %d are as follows:- \n", lower, upper);
	for(i=lower; i<=upper; i++)
	{
		if(isArmstrong(i) == 1)
			printf("%d\t", i);
	}
	printf("\n");
}

// function definition to check whether Armstrong or not
int isArmstrong(int number)
{
	int count = 0;
	int sum = 0;
	int copy = number;
	int second_copy = number;

	// finding the number of digits
	while(copy != 0)
	{
		count++;
		copy /= 10;
	}

	// checking if Armstrong or not
	while(second_copy != 0)
	{
		sum += pow((second_copy%10), count);
		second_copy /= 10;
	}
	
	if(number == sum)
		return 1;

	return 0;
}
