//function with args and with return value
#include<stdio.h>
#include<conio.h>
int sum(int,int);
void main()
{
	int num1,num2,ret;
	clrscr();
	printf("enter values of num1 and num2");
	scanf("%d%d",&num1,&num2);
	ret=sum(num1,num2);//function calling
	printf("sum of %d and %d is %d",num1,num2,ret);
	getch();
}
int sum(int num1,int num2)
{
	return num1+num2;
}