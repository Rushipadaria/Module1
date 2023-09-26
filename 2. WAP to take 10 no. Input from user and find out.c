#include<stdio.h>
main()
{
	int arr[10],i;
	printf("Enter your value :");
	for(i=1;i<=10;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=1;i<=10;i++)
	{
		if(i%2==0)
		{
			printf("The even number is :%d\n",arr[i]);
		}
		else
		{
			printf("the odd number is :%d\n",arr[i]);
		}
	}
}
