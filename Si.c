// wap of simple interest in c program
#include<stdio.h>
main()
{
	int p,r,t,si;
	printf("Enter principle :");
	scanf("%d",&p);
	printf("Enter Rate :");
	scanf("%d",&r);
	printf("Enter Time :");
	scanf("%d",&t);
	
	si = p * r*t/100;
	printf("Simple interest = %d",si);
}
