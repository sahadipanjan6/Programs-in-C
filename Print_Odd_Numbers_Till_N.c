#include<stdio.h>

void main()
{
	int i = 0;
	int N = 0;

	printf("\nEnter the value of N: \n");
	scanf("%d", &N);

	printf("\nThe odd numbers within 1 and %d are as follows: \n", N);
	for(i=1; i<N; i+=2)
		printf("%d\t", i);
	
	printf("\n");
}