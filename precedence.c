#include<stdio.h>
#include<conio.h>
void main()
{
	char arr[10]="madeeasy";
	char *ptr=arr;
	++*ptr;
	printf("%c",*ptr);
	getch();
}
