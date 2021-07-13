#include<stdio.h>
#include<conio.h>
typedef int (*FP)(int ,int);
int sum(int x,int y)
{
	return x+y;
}
int sub(int x,int y)
{
	return x-y;
}
int mul(int x,int y)
{
	return x*y;
}
int div(int x,int y)
{
	return x/y;
}
 

void main()
{
	int ans;
	FP sptr;
	sptr=sum;
	ans=(*sptr)(10 ,20);
	printf("%d\n",ans);
	sptr=sub;
	ans=(*sptr)(100,50);
	printf("%d\n",ans);
	sptr=mul;
	ans=(*sptr)(10,20);
	printf("%d\n",ans);
	sptr=div;
	ans=(*sptr)(10,5);
	printf("%d\n",ans);
	getch();
}