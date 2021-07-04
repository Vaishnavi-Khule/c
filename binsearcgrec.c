											#include<stdio.h>
#include<conio.h>

	void selection_sort(int a[],int n)
{
	int temp,i,j;
	
	for(i=0;i<n;i++)
	{
		for(j=1;j<n-1;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	}
	void binarysearch(int a[],int low,int high,int search)
	{
		int mid,flag=0;
		
		
		
			mid=(low+high)/2;
			if(search==a[mid])
			{
				printf("elemnt is found");
				flag=1;
				return;
			}
			else if(search<a[mid])
			{
				binarysearch(a,low,mid-1,search);
			}
			else
			{
				binarysearch(a,mid+1,high,search);
			}
		
		if(flag==0)
		{
			printf("element not found");
		}
	

}
	void main()
{
	int a[10],n,i,key;
	printf("how many elements elements u want to enter");
	scanf("%d",&n);
	printf("enter elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	selection_sort(a,n);
	printf("enter element u want to search");
		scanf("%d",&key);
	binarysearch(a,0,n-1,key);
	getch();
}




