#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fp=fopen("file.txt","r");
	if(fp!=NULL)
	{
		printf("file created successfully");
	}
	else
	printf("not created");
	getch();
}