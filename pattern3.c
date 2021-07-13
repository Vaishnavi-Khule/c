#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	for(i='E';i>='A';i--)
	{
		for(j=i;j>='A';j--)
		{
			printf("%c",j);                     //instead of j if ji printed then another pattern formed.
		}
		printf("\n");
	}
	getch();
}