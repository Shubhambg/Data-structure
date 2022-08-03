#include<stdio.h>
#include<conio.h>
void add();
void sub();
void mult();
void div();
main()
{
	add();
	sub();
	mult();
	div();
}
void add()
{
	int a,b,sum;
	printf("Enter two numbers= \n");
	scanf("%d%d",&a,&b);
	sum=a+b;
	printf("Addition of given two numbers is %d\n",sum);
}
void sub()
{
	int a,b,sub;
	printf("Enter two numbers= \n");
	scanf("%d%d",&a,&b);
	sub=a-b;
	printf("sub given two numbers is %d\n",sub);
}
void mult()
{
	int a,b,mult;
	printf("Enter two numbers= \n");
	scanf("%d%d",&a,&b); 
	mult=a*b;
	printf("division of numbers is %d\n",mult);
}
void div()
{
	int a,b,div;
	printf("Enter two numbers= \n");
	scanf("%d%d",&a,&b);
	div=a/b;
	printf("Addition of given two numbers is %d\n",div);
}
