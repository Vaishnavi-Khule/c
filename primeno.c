#include<stdio.h>
#include<conio.h>
void main()
{
	int no,i;
	int co=0;
	printf("enter any number to check it is prime or not");
	scanf("%d",&no);
	for(i=2;i<no;i++)
	{
		if(no%i==0)
		{
			printf("no is not prime ");
		}
		else
			co++;
	}
