#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k;
	int n=10;
	for(i=0;i<n;i++)
	{
		for(j=n-1;j>i;j--)
		{
			printf(" ");
		}
		for(k=0;k<=i;k++)
		{
			printf("%c",i+65);
		}
		printf("\n");
	}
	getch();
}