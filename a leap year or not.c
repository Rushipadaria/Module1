// WAP to check if the given year is a leap year or not. 

#include<stdio.h>
int main()
{
	int year;
	printf("Enter your years : ");
	scanf("%d",&year);
	
	if(year %4 ==0)
	{
		printf("It is a leap year");
	}
	else
	{
		printf("It is not a leap year");
	}
}
