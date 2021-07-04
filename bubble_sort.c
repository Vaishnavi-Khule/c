#include<stdio.h>
#include<conio.h>
void display(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}
void bubble(int a[],int n)
{
	int i,trav;
	int temp;
	int flag=0;
	for(trav=1;trav<n;trav++)
	{
		for(i=0;i<n-trav;i++)
		{
			if(a[i]>a[i+1])
			{   
				flag=1;
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}
		if(flag==0);
		{
		printf("list is sorted");
		break;
	}
	}
}






void main()
{
	int a[10],n;
	int i;
	printf("how many elements u want to enter");
	scanf("%d",&n);
	printf("enter %d elements",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("unsorted list");
	display(a,n);
	printf("sorted list");
	bubble(a,n);
	display(a,n);
	getch();

}