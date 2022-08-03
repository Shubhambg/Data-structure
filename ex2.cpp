#include<stdio.h>
#include<conio.h>
void add(int a,int b);
void sub(int a,int b);
void mult(int a,int b);
void div(int a,int b);
main()
{
	int a,b;
	printf("Enter two numbers = \n");
	scanf("%d%d",&a,&b);
	add(a,b);
	sub(a,b);
	mult(a,b);
	div(a,b);
}
void add(int a,int b)
{
	int sum;
	sum=a+b;
	printf("Addition of given two numbers is %d\n",sum);
}
void sub(int a,int b)
{
	int sub;
	sub=a-b;
	printf("sub given two numbers is %d\n",sub);
}
void mult(int a,int b)
{
	int mult; 
	mult=a*b;
	printf("division of numbers is %d\n",mult);
}
void div(int a,int b)
{
	int div;
	div=a/b;
	printf("Addition of given two numbers is %d\n",div);
}
