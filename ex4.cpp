#include<stdio.h>
int add(int a,int b);
int sub(int a,int b);
int mult(int a,int b);
int div(int a,int b);
main()
{
	int a,b,ch,ch1;
	printf("-------- MENU ---------");
	printf("1.add\n2.sub\n3.mult4.div\n");
	do
{
	printf("Enter two numbers = \n");
	scanf("%d%d",&a,&b);
	printf("Choice from menu");
	scanf("%d",&ch);
	add(a,b);
	sub(a,b);
	mult(a,b);
	div(a,b);

switch (ch)
{
case 1:
int add(int a,int b);
	int sum;
	sum=a+b;
	printf("Addition of given two numbers is %d\n",sum);
	break;

case 2:
int sub(int a,int b);
	int sub;
	sub=a-b;
	printf("sub given two numbers is %d\n",sub);
	break;

case 3:
int mult(int a,int b);
	int mult; 
	mult=a*b;
	printf("division of numbers is %d\n",mult);
	break;

case 4:
int div(int a,int b);
	int div;
	div=a/b;
	printf("Addition of given two numbers is %d\n",div);
	break;
}
printf("do you want to continue (0,1)\n");
scanf("%d",&ch1);
}
while (ch==1);
}
