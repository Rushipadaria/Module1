// wap of print factorial of given number 
#include<stdio.h>
main()
{
	int n,i,factorial;
	printf("Enter the value:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		factorial*=i;
	}
	printf("The fatorial is :%d",factorial);
}
