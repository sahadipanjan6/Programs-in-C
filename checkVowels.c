// Write a C program Check whether an alphabet is a vowel or consonant.

#include<stdio.h>

void main()
{
	char ch;
	
	printf("Enter any character: ");
	scanf("%c", &ch);
	
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
		printf("'%c' is a vowel\n", ch);
	else if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
		printf("'%c' is a vowel\n", ch);
	else
		printf("'%c' is a consonant\n", ch);
}
