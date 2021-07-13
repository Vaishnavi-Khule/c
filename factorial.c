#include<stdio.h>
#include<conio.h>
int facto(int no)
{
	int fact=1;
	if(no==0||no==1)
	return 1;
	else
	

	 fact=no*facto(no-1);
	
return fact;
}
int main()
{
	int no,fact;
	printf("enter your number\n");
	scanf("%d",&no);
	fact=facto(no);
	printf("%d",fact);
	getch();
}
	
