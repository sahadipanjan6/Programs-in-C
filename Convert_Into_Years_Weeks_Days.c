#include<stdio.h>

void main()
{
	int days, total_days = 0;
	int years, weeks = 0;

	printf("\nEnter total number of days: ");
	scanf("%d", &total_days);

	// converting and displaying
	years = total_days / 365;
	weeks = (total_days % 365) / 7;
	days = (total_days % 365) % 7;

	printf("\nTotal Days = %d", total_days);
	printf("\nYears = %d", years);
	printf("\nWeeks = %d", weeks);
	printf("\nRemaining Days = %d", days);
}