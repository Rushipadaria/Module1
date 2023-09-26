/* WAP to make simple calculator (operation include Addition, Subtraction, 
Multiplication, Division, modulo) 
*/
	
#include<stdio.h>
void add();
void add()
{
	int a,b;
	printf("Enter two number: ");
	scanf("%d%d",&a,&b);
	printf("Total is add :%d\n",a+b);
}
void sub()
{
	int a,b;
	printf("Enter two number: ");
	scanf("%d%d",&a,&b);
	printf("Total is sub :%d\n",a-b);
}
void mun()
{
	int a,b;
	printf("Enter two number: ");
	scanf("%d%d",&a,&b);
	printf("Total is mun :%d\n",a*b);
}
void div()
{
	int a,b;
	printf("Enter two number: ");
	scanf("%d%d",&a,&b);
	printf("Total is div :%d\n",a/b);
}
void mod()
{
	int a,b;
	printf("Enter two number: ");
	scanf("%d%d",&a,&b);
	printf("Total is mod :%d\n",a%b);
}
int main()
{
	add();
	sub();
	mun();
	div();
	mod();
}
