// Program to check whether a given number is ABUNDANT or not

#include<stdio.h>
int isAbundant(int number);
void main()
{
	int n;
	printf("Enter any number: \n");
	scanf("%d", &n);
	
	if(isAbundant(n) == 1)
		printf("%d is an ABUNDANT Number!!!", n);
	else
		printf("%d is not an ABUNDANT Number!!!", n);
	
}

int isAbundant(int number)
{
	int copy=number;
	int sum=0;
	int i=0;
	
	for(i=1; i<copy; i++)
	{
		if(copy%i == 0)
			sum += i;
	}
	
	if(sum > number)
		return 1;
		
	else
		return 0;
}
