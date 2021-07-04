#include<stdio.h>
#include<conio.h>
void quick_sort(int a[],int,int);
void display(int arr[],int n);
void main()
{
	int arr[100],n,i;
	printf("How many elements you want to enter \n");
	scanf("%d",&n);
	printf("enter array elements\n");
    for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Unsorted array elements are\n");
	
	display(arr,n);
	quick_sort(arr,0,n-1);
	printf("sorted array elements are\n");

	display(arr,n);
	getch();
}
void quick_sort(int a[],int L,int H)
{
	int low,high,temp;
	int pivot;
	pivot=a[L];
	low=L+1;
	high=H;
	while(low<=high)
	{

		while(a[low]<pivot)
		{
		low++;
		}
		while(a[high]>pivot)
		{
		high--;
		}
		if(low<=high)
		{
		temp=a[low];
		a[low]=a[high];
		a[high]=temp;
		low++;
		high--;
		}

	}
	temp=a[L];
	a[L]=a[high];
	a[high]=temp;
	if(L<high)
		{
			quick_sort(a,L,high-1);
		}
		if(low<H)
		{
			quick_sort(a,high+1,H);

		}
	
}
void display(int arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
}