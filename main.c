#include<stdio.h>
void main()
{
    int a,b,ch,ch1;
    float result;
     printf("Menu\n");
     printf("1.add\n2.sub\n3.multi\n4.div\n");
 do
     {
    printf("Enter the first Number:");
    scanf("%d",&a);
    printf("enter the second number:");
    scanf("%d",&b);
    printf("your numbers are %d,%d\n",a,b);
    printf("choice from menu: \n");
    scanf("%d",&ch);
    
    switch(ch)
    {
        case 1:
        result = a+b ;
        printf("%f\n",result);
        break;
        
        case 2:
        result = a-b ;
        printf("%f\n",result);
        break;
        
        case 3:
        result = a*b ;
        printf("%f\n",result);
        break;
        
        case 4:
        result = a/b ;
        printf("%f\n",result);
        break;
    }
    printf("do you want to continue (0,1)\n");
    scanf("%d",&ch1);
     }
     while(ch1==1);
     }
    