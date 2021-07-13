#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k;
	int n=5;
	for(j=n;j>=1;j--)
	{
	for(i=n-1;i>=j;i--)
	{
		printf(" ");
	}
	
	for(k=1;k<=j;k++)
	{
	printf("*");
	}
	printf("\n");
	}
	getch();
}
