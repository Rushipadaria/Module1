//WAP to swap two numbers without using third variable
#include<stdio.h>
main()
{
	int a=40,b=50;
	printf("Before swapping value of a=%d and b=%d\n",a,b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("After swapping value of a=%d and b=%d\n",a,b);
}
