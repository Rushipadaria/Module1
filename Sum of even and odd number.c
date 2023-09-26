//Sum of even and odd numbers
#include<stdio.h>
main()
{
	int even,a,sum,odd;
	printf("Enter the value:");
	scanf("%d",&a);
	if(a % 2 == 0)
	{
		printf("Even number is :%d\n",a);
		printf("\n");
		printf("Sum of even number :");
		scanf("%d",&even);
		sum = even + a;
		printf("Total sum of even number :%d",sum); 
	}
	else
	{
		printf("Odd number is :%d",a);
		printf("\n");
		printf("Sum of odd number :");
		scanf("%d",&odd);
		sum = odd + a;
		printf("Total sum of odd number :%d",sum);
	}
}
