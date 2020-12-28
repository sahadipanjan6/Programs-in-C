#include<stdio.h>

void main()
{
	float basic, da, hra, gross_salary, pf = 0.0f;

	printf("\nEnter basic salary: ");
	scanf("%f", &basic);

	// calculating the DA@40%, HRA@20%, PF@12%
	da = 0.4 * basic;
	hra = 0.2 * basic;
	pf = 0.12 * basic;
	gross_salary = da + hra + pf + basic;

	printf("\nGross Salary = %f", gross_salary);
}