#include<stdio.h>

void main()
{
	int i, copy, number, count = 0;

	printf("\nEnter any number: ");
	scanf("%d", &number);

	copy = number;
	while(copy != 0)
	{
		count++;
		copy /= 10;
	}

	printf("\nNumber of digits in %d = %d\n", number, count);
}