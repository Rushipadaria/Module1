// WAP to find number is even or odd using ternary operator

#include<stdio.h>
main()
{
	int n;
	printf("Enter your number : ");
	scanf("%d",&n);
	
	(n % 2 == 0) ? printf("This is even number",n)
	           	 :  printf("This is Old number",n);
		
}
